#include <iostream>
using namespace std;

#include <Clock.hpp>

int 
main()
{
	Timer t(5 * 60);

	t.startTimer();

	while (!t.isTimeUp()) {
		cout << t.getSecondsLeft() << "min left\n";
	}
}