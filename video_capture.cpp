#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

int main(){
    cv::VideoCapture cap(0);

    if (!cap.isOpened())
 { 
        std::cerr << "摄像头打开失败" << std::endl;
        return -1;
    }
    cv::Mat frame;
    cv::namedWindow("摄像头", cv::WINDOW_AUTOSIZE);
    while(true){
        cap>>frame;
        if (frame.empty()){
            std::cerr << "摄像头读取失败" << std::endl;
            break;
        }
        cv ::imshow("摄像头", frame);
        if(cv::waitKey(1) == 27 )
        {
            break;
        }
    }
        cap.release();
        cv::destroyAllWindows();
        return 0;
}

