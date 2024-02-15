#include "AsciiTest.h"
#include <iostream>
using namespace std;

void AsciiTest::doSomething() {
	int myNumbers[26] = { 0 }; // myNumbers is an array of 26 integers
	// where each integer initialized to 0, index goes from 0 to 25

	char c = 'A';
	char bell = static_cast<char>(7);
	int j = 0;
	j = 97;

	for (int i = 0; i < 26; i++) {
		// populate the array with 65 to 90
		myNumbers[i] = j;
		j++;
	}

	for (int i = 0; i < 26; i++) {
		// display the array
		cout << myNumbers[i] << " "; 
	}

	cout << endl;

	for (int i = 0; i < 26; i++) {
		// convert integers in the array into chars via static_cast
		cout << static_cast<char>(myNumbers[i]) << " ";
	}

	cout << endl;
	// cout << bell << endl; // bell sound!

	// cout << "Ascii code for A is " << static_cast<int>(c) << endl;
}

void AsciiTest::convertDigitsSmallLetters() {
	// convert 0-9 to a-j
	// ascii code for 0-9 is 48-56
	int i = '0'; // i = ascii code for 0: 48

	for (int j = 0; j < 10; j++) {
		cout << static_cast<char>(i) << ":" << static_cast<char>(i + 49) << " ";
		i++;
	}

	cout << endl;
}

void AsciiTest::capitalizeSmallLetters() {
	int i = 'a'; // i = ascii code for a: 97

	for (int k = 0; k < 26; k++) {
		cout << static_cast<char>(i) << ":" << static_cast<char>(i-32) << " ";
		i++;
	}
}

void AsciiTest::smallLettersCapital() {
	int i = 'A'; // i = ascii code for A: 65

	for (int k = 0; k < 26; k++) {
		cout << static_cast<char>(i) << ":" << static_cast<char>(i+32) << " ";
		i++;
	}
}
