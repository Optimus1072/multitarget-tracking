#ifndef MTT_DPP_H
#define MTT_DPP_H

#include <time.h>
#include <iostream>
#include <cstdlib>
#include "utils/image_generator.hpp"
#include "utils/utils.hpp"
#include "dpp/dpp.hpp"
#include "models/phd_particle_filter.hpp"

using namespace std;
using namespace cv;

class TestDPP
{
public:
	TestDPP();
	TestDPP(string _firstFrameFileName, string _groundTruthFileName, string _preDetectionFile,
		double _epsilon, double _mu, double _lambda, int _npart);
	void run();
private:
	//int numFrames;
	string firstFrameFileName, groundTruthFileName, preDetectionFile;
	int npart;
	double epsilon, mu, lambda;
	ImageGenerator generator;
};

#endif