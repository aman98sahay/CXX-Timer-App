#pragma once 

#include <Clock.hpp>

class InternalClock {
public :
	
				
	InternalClock(Timer& obj) : mainTimer(obj) {}

	void operator() ();

private:
	Timer& mainTimer;
};