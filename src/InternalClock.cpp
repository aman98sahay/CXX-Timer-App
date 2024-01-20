#include <InternalClock.hpp>
//#include <synchapi.h>
#include <Windows.h>
#include <iostream>

void 
InternalClock :: operator() ()
{
	while (!mainTimer.isTimeUp()) 
	{
		Sleep(1);
		mainTimer.ASecondHasPassed();
	}
}