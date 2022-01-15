#include <iostream>
#include <cstdint>
#include <conio.h>

/*
	Source by AlphaCodingSkills
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	//using int_least16_t type
	int_least16_t x = 10;

	//displaying maximum and minimum value
	cout << "INT16_MIN: " << INT16_MIN << "\n";
	cout << "INT16_MAX: " << INT16_MAX << "\n";
	cout << "UINT16_MAX: " << UINT16_MAX << "\n";
	cout << "INT_LEAST32_MIN: " << INT_LEAST32_MIN << "\n";
	cout << "INT_LEAST32_MAX: " << INT_LEAST32_MAX << "\n";
	cout << "UINT_LEAST32_MAX: " << UINT_LEAST32_MAX << "\n";

	_getch();
	return 0;
}

