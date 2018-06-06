#pragma once
#include "opencv2/core/core.hpp"

class ImageBrighten
{
public:
	void brighten(const cv::Mat& src, cv::Mat& dst);

private:
	void fastHazeRemoval(const cv::Mat& src, cv::Mat& dst);
	void fastHazeRemoval_1Channel(const cv::Mat& src, cv::Mat& dst);
	void fastHazeRemoval_3Channel(const cv::Mat& src, cv::Mat& dst);
};

// wrapper
void brighten(const cv::Mat& src, cv::Mat& dst);