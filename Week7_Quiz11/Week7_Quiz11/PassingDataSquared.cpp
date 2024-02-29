#include "PassingDataSquared.h"
#include <iostream>
using namespace std;

void PassingDataSquared::square1(int square) {
	square = square * square;
	cout << "Pass by Value" << endl;
	cout << "square1: square = " << square << endl;
}

void PassingDataSquared::square2(int& square) {
	square = square * square;
	cout << "\nPass by Reference" << endl;
	cout << "square2: square = " << square << endl;
}

void PassingDataSquared::square3(int* square) {
	*square = *square * *square;
	cout << "\nPass by Pointer" << endl;
	cout << "square3: square = " << *square << endl;
}
