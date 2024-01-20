#pragma once 

#include <Clock.hpp>

class InternalClock {
public :
	
				
	InternalClock(Clock& obj) : mainTimer(obj) {}

	void operator() ();

private:
	Clock& mainTimer;
};