#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	
		std::cout << "Correct !!";
		return true;
	
}
int main(array<System::String ^> ^args)
{
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}