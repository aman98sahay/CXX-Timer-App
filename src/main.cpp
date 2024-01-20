#include <iostream>
using namespace std;

#include <Clock.hpp>

int 
main()
{
	int sec;
	cout << "Enter the number of Seconds you want the timer to run for :";
	cin >> sec;


	Clock t( sec);

	t.startTimer();

	while (!t.isTimeUp()) {
		system("cls");
		cout << t.getSecondsLeft() << "s left\n";
	}
}