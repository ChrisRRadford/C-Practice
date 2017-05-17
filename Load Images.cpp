#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/xfeatures2d.hpp>
/**#include "opencv2/core.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"
#include "opencv2/highgui.hpp"
**/
using namespace cv;
using namespace cv::xfeatures2d;


int main( int argc, char** argv )
{
	Mat image1 = imread( argv[1],1);
 	Mat image2 = imread( argv[2],1);
 	cv::resize(image1,image1,cv::Size(1200,900));
 	cv::resize(image2,image2,cv::Size(1200,900));

 	imshow("Image 1", image1);
 	waitKey(0);
 	destroyAllWindows();
 	imshow("Image 2", image2);
 	waitKey(0);
 	destroyAllWindows();

}