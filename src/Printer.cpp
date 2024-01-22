#include "Printer.hpp"
#include <iostream>

void Printer::TakeThreadAndPrintLoader()
{
	using std::cout;
	float ratio;

	for (int i = 0; i < LENGTH_OF_LOADER + 1; i++) // TODO idk why it is (LENGTH_OF_LOADER + 1) and not (LENGTH_OF_LOADER + 2)
		cout << " ";
	cout << "[";
	while (!cl.isTimeUp()) {
		//cout << "\x1B[2k \r";
		//cout << "\r[";

		for (size_t i = 0; i < LENGTH_OF_LOADER + 2; i++)
		{
			cout << "\x1B[1D";//ESC[#D goes back # steps
		}

		cout << "[";
		for (int i = 1; i <= LENGTH_OF_LOADER; i++) {
			if (float(i) / LENGTH_OF_LOADER <= cl.fractionCompleted()) {
				
				cout << "#";
			}
			else {
				cout << " ";
			}
		}
		cout << "]";
	}
	cout << "\n\a\a\a";
}
