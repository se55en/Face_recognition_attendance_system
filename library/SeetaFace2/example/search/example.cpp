#pragma warning(disable: 4819)

#include <seeta/FaceEngine.h>

#include <seeta/Struct_cv.h>
#include <seeta/Struct.h>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <array>
#include <map>
#include <iostream>

#include <seeta/QualityAssessor.h>
#include <seeta/FaceRecognizer.h>

int main()
{
    seeta::ModelSetting::Device device = seeta::ModelSetting::CPU;
    int id = 0;
    seeta::ModelSetting FD_model( "./model/fd_2_00.dat", device, id );
    seeta::ModelSetting PD_model( "./model/pd_2_00_pts5.dat", device, id );
    seeta::ModelSetting FR_model( "./model/fr_2_10.dat", device, id );
    seeta::FaceEngine engine( FD_model, PD_model, FR_model, 2, 16 );


    seeta::FaceRecognizer  mRecognizer(FR_model);


    seeta::QualityAssessor QA;

    // recognization threshold
    float threshold = 0.7f;

    //set face detector's min face size
    engine.FD.set( seeta::FaceDetector::PROPERTY_MIN_FACE_SIZE, 80 );

    std::vector<std::string> GalleryImageFilename = { "1.jpg" };
    std::vector<int64_t> GalleryIndex( GalleryImageFilename.size() );
    for( size_t i = 0; i < GalleryImageFilename.size(); ++i )
    {
        //register face into facedatabase
        std::string &filename = GalleryImageFilename[i];
        int64_t &index = GalleryIndex[i];
		std::cerr << "Registering... " << filename << std::endl;
        seeta::cv::ImageData image = cv::imread( filename );
        auto id = engine.Register( image );
        index = id;
        std::cerr << "Registered id = " << id << std::endl;
    }
    std::map<int64_t, std::string> GalleryIndexMap;
    for( size_t i = 0; i < GalleryIndex.size(); ++i )
    {
        // save index and name pair
        if( GalleryIndex[i] < 0 ) continue;
        GalleryIndexMap.insert( std::make_pair( GalleryIndex[i], GalleryImageFilename[i] ) );
    }
    
    std::cout << "----open camera----" << std::endl;
    // Open default USB camera
    cv::VideoCapture capture;
    capture.open( 0 );

    cv::Mat frame;
    cv::namedWindow("Frame");
    while( capture.isOpened() )
    {
        capture >> frame;
        if( frame.empty() ) continue;

        seeta::cv::ImageData image = frame;

        // Detect all faces
        std::vector<SeetaFaceInfo> faces = engine.DetectFaces( image );

        for( SeetaFaceInfo &face : faces )
        {
            // Query top 1
            int64_t index = -1;
            float similarity = 0;
            auto points = engine.DetectPoints(image, face); //检测人脸5个特征点
            //在图片上把人脸框出来
            cv::rectangle( frame, cv::Rect( face.pos.x, face.pos.y, face.pos.width, face.pos.height ), CV_RGB( 128, 128, 255 ), 3 );

            //把5个特征点绘制出来
			for (int i = 0; i < 5; ++i)
			{
				auto &point = points[i];
				cv::circle(frame, cv::Point(int(point.x), int(point.y)), 2, CV_RGB(128, 255, 128), -1);
			}

			std::string name;
            auto score = QA.evaluate(image, face.pos, points.data());
            if (score == 0) {
                name = "ignored";
            }
            //std::cout<<score<<std::endl;  //数据越大人脸质量越好

 #if 1
            else {
                auto queried = engine.QueryTop( image, points.data(), 1, &index, &similarity );
                // no face queried from database
                if (queried < 1) continue;
                // similarity greater than threshold, means recognized
                if( similarity > threshold )
                {
                    name = GalleryIndexMap[index];
                }

//                  int size = mRecognizer.GetExtractFeatureSize();
//                  std::cout<<size<<std::endl;

//                  float firstFeature[1024];

//                  mRecognizer.CalculateSimilarity(firstFeature, firstFeature);
//                  mRecognizer.Extract(image, points.data(), firstFeature);

            }
  #endif

            if( !name.empty() )
            {
                cv::putText( frame, name, cv::Point( face.pos.x, face.pos.y - 5 ), 3, 1, CV_RGB( 255, 128, 128 ) );
            }

        }

        cv::imshow( "Frame", frame );
        auto key = cv::waitKey( 1 );
//        if( key == 27 )
//        {
//            break;
//        }
    }
}
