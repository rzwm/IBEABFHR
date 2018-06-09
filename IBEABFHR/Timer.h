#pragma once
#include <iostream>
#include <chrono>

class Timer
{
public:
	Timer()
		: t1(res::zero())
		, t2(res::zero())
	{
		tic();
	}

	~Timer()
	{}

	void tic()
	{
		t1 = clock::now();
	}

	void toc(const char* str)
	{
		t2 = clock::now();
		std::cout << str << " time: "
			<< std::chrono::duration_cast<res>(t2 - t1).count() / 1e3 << "ms." << std::endl;
	}

private:
	typedef std::chrono::high_resolution_clock clock;
	typedef std::chrono::microseconds res;

	clock::time_point t1;
	clock::time_point t2;
};
