#include "RNMaths.h"
#include <iostream>
#include <cstdlib> // provides rand(), srand()
using namespace std;

void RNMaths::generateRN() {
	// int aNumber = -1;
	int total = 0; // running total of sum of integers
	int newTotal = 0;
	int myNumbers[20]; // array of 20 integers

	srand(time(0)); // generator seeded with the current seconds since epoch

	for (int i = 0; i < 20; i++) {
		myNumbers[i] = rand();
		cout << "Random Number " << i+1 << ": " << myNumbers[i] << endl;
	}

	for (int i = 0; i < 20; i++) {
		total = total + myNumbers[i];
	}

	cout << "\nGrand Total: " << total << endl;

	for (int i = 0; i < 20; i++) {
		myNumbers[i] = myNumbers[i] + 10;
		newTotal = newTotal + myNumbers[i];
	}

	cout << "\nNew Total: " << newTotal << endl;
}