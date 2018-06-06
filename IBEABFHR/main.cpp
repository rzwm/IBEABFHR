#include <iostream>
#include "opencv2/highgui/highgui.hpp"
#include "image_brighten.h"

int main()
{
	cv::Mat image = cv::imread("../images/2.jpg");
	if (image.empty())
	{
		std::cout << "Couldn't open file!" << std::endl;
		system("pause");
		return -1;
	}

	cv::Mat image_brighten;
	brighten(image, image_brighten);

	cv::imshow("Original image", image);
	cv::imshow("Brighten image", image_brighten);

	cv::waitKey();

	return 0;
}
