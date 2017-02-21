#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char const *argv[])
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    Mat edges;
    // namedWindow("edges",1);
    Mat frame;
    for(;;)
    {
        cap >> frame; // get a new frame from camera
        imshow("fram", frame);
        if(waitKey(30) >= 0) break; //exit on some key
    }

	
	return 0;
}