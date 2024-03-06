// This program uses a reference variable as a function parameter.
#include <iostream>
#include "PassingValues.h"
using namespace std;

/**************************************************************
 *                         doubleNum                          *
 * This function's parameter is a reference variable. The &   *
 * tells us that. This means it receives a reference to the   *
 * original variable passed to it, rather than a copy of that *
 * variable's data. The statement refVar *= 2 is doubling the *
 * data stored in the value variable defined in main.         *
 **************************************************************/

void PassingValues::doubleNum1(int& aNumber) {
	aNumber = aNumber * 2;
	cout << "\nPass by Reference" << endl;
	cout << "doubleNum1: aNumber = " << aNumber << endl;
}

void PassingValues::doubleNum2(int* aNumber) {
	*aNumber = *aNumber * 2;
	cout << "\n\nPass by Pointer" << endl;
	cout << "doubleNum2: aNumber = " << *aNumber << endl;
}
