#ifndef CUDA_HOG_DETECTOR_H
#define CUDA_HOG_DETECTOR_H
#include <Eigen/Core>
#include <opencv2/core/eigen.hpp>
#include <opencv2/cudaobjdetect.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
using namespace Eigen;

class CUDA_HOGDetector
{
public:
	CUDA_HOGDetector(int group_threshold, double hit_threshold);
	vector<Rect> detect(Mat &frame);
	void draw();
	//vector<Rect> getDetections();
	MatrixXd getFeatureValues();
	VectorXd getDetectionWeights();

private:
	int group_threshold;
	double hit_threshold;
	Ptr<cuda::HOG> gpu_hog;
	vector<Rect> detections;
	VectorXd weights;
	Mat frame;
};

#endif