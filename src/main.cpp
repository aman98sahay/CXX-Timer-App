#include <iostream>
#include <conio.h>
using namespace std;

#include <Clock.hpp>

int 
main()
{
	int sec;
	cout << "Enter the number of Seconds you want the timer to run for :";
	cin >> sec;

	Clock t(sec);

	t.startTimer();

	cout << "The timer has completed!!!\n" << sec <<" Seconds have passed\n";
	_getch();
}