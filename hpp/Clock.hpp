#pragma once 

class Timer {
public:
	
	Timer(long timeInSeconds);

	float fractionCompleted();

	long getSecondsLeft ();

	void startTimer();

	bool isTimeUp();


private:
	friend class InternalClock;

	void ASecondHasPassed();

	
};