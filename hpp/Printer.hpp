#pragma once 

#include <Clock.hpp>

#define LENGTH_OF_LOADER 50

class Printer {

	Clock& cl;

public :
	
	Printer(Clock& obj) : cl(obj) {}

	void TakeThreadAndPrintLoader();

};