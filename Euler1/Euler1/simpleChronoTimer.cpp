#include "stdafx.h"
#include "simpleChronoTimer.h"
#include <iostream>
#include <string>


simpleChronoTimer::simpleChronoTimer()
{
}
simpleChronoTimer::~simpleChronoTimer()
{
}

void simpleChronoTimer::start() {
	startTime = std::chrono::high_resolution_clock::now();
	
}
void simpleChronoTimer::stop() {
	stopTime = std::chrono::high_resolution_clock::now();
	time_span = std::chrono::duration_cast<std::chrono::duration<double>>(stopTime - startTime);
}

void simpleChronoTimer::printReport() {
	std::cout<<std::fixed << time_span.count();
}
