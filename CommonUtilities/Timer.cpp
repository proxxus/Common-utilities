#include "stdafx.h"
#include "Timer.hpp"

Timer::Timer()
{
	myDT = 0;
	myLastFrame = myClock.now();
	myCurrentFame = myClock.now();
}

void Timer::Update()
{

}
