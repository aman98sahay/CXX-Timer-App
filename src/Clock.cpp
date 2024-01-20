#include <Clock.hpp>
#include <InternalClock.hpp>
#include <thread>
#include <assert.h>


Clock::Clock(long timeInSeconds) 	
{
	secondsLeft = waitInSeconds = timeInSeconds;
}

float
Clock::fractionCompleted()
{
	return float(waitInSeconds - secondsLeft) / waitInSeconds;
}

long
Clock::getSecondsLeft()
{
	return secondsLeft;
}

void 
Clock::startTimer() 
{
	InternalClock internal_clock(*this);
	std::thread t(internal_clock);
	t.detach();
	return;
}

bool 
Clock::isTimeUp()
{
	return secondsLeft <= 0 ? true : false;
}

void 
Clock::ASecondHasPassed() 
{
	assert(secondsLeft >= 0);

	if (secondsLeft) {
		secondsLeft--;
	}
}