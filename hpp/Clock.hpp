#pragma once 

class Clock {
public:
	
	Clock(long timeInSeconds);

	float fractionCompleted();

	long getSecondsLeft ();

	void startTimer();

	bool isTimeUp();
	

	void TakeCurrentThreadAndPrintOnScreen();

private:
	friend class InternalClock;

	void ASecondHasPassed();
	long secondsLeft;
	long waitInSeconds;
	
};