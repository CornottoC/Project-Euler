#pragma once

#include <ctime>
#include <chrono>
class simpleChronoTimer
{
public:
	simpleChronoTimer();
	~simpleChronoTimer();
	void start();
	void stop();
	void printReport();
private:
	std::chrono::high_resolution_clock::time_point startTime;
	std::chrono::high_resolution_clock::time_point stopTime;
	std::chrono::duration<double> time_span;
};

