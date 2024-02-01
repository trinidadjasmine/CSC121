#include "RNMaths.h"
#include <iostream>
#include <cstdlib> // provides rand(), srand()
using namespace std;

void RNMaths::generateRandNums() {
	int minValue = 450, maxValue = 6000;
	// int aNumber = -1;

	srand(time(0)); // generator seeded with the current seconds since epoch

	for (int i = 0; i < 20; i++) {
		myNumbers[i] = rand() % (maxValue - minValue + 1) + minValue; 
	}
}

void RNMaths::calcTotal() {
	total = 0;
	for (int i = 0; i < 20; i++) {
		total = total + myNumbers[i];
	}
}

void RNMaths::addTenTotal() {
	for (int i = 0; i < 20; i++) {
		myNumbers[i] = myNumbers[i] + 10;
	}
}

void RNMaths::displayArrayTotal() {
	for (int i = 0; i < 20; i++) {
		cout << myNumbers[i] << endl;
	}

	cout << "\nGrand Total: " << total << endl;
}
