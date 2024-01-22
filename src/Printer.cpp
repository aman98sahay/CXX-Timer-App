#include "Printer.hpp"
#include <iostream>

void Printer::TakeThreadAndPrintLoader()
{
	using std::cout;
	float ratio;

	while (!cl.isTimeUp()) {
		cout << "\r[";
		for (int i = 1; i <= LENGTH_OF_LOADER; i++) {
			if (float(i) / LENGTH_OF_LOADER <= cl.fractionCompleted()) {
				
				cout << "#";
			}
			else {
				cout << " ";
			}
		}
		cout << "]";
		printf ("%5d secs left",cl.getSecondsLeft());
	}
	cout << "\n\a\a\a";
}
