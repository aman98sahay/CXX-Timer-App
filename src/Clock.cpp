#include <Clock.hpp>
#include <InternalClock.hpp>
#include <thread>
#include <assert.h>
volatile long secondsLeft;
volatile long waitInSeconds;

Timer::Timer(long timeInSeconds) 	
{
	secondsLeft = waitInSeconds = timeInSeconds;
}

float
Timer::fractionCompleted()
{
	return float(waitInSeconds - secondsLeft) / waitInSeconds;
}

long
Timer::getSecondsLeft()
{
	return secondsLeft;
}

void 
Timer::startTimer() 
{
	InternalClock internal_clock(*this);
	std::thread t(internal_clock);
	t.detach();
	return;
}

bool 
Timer::isTimeUp()
{
	return secondsLeft <= 0 ? true : false;
}

void 
Timer::ASecondHasPassed() 
{
	assert(secondsLeft >= 0);

	if (secondsLeft) {
		secondsLeft--;
	}
}