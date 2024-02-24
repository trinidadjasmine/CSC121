#include "RandNumGuessingGame.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void RandNumGuessingGame::calcRandNum() {
	srand(time(0)); // seed

	// defined minValue = 1, maxValue = 100
	// number = rand num between 1 and 100
	number = rand() % (maxValue - minValue + 1) + minValue;
}

void RandNumGuessingGame::guessRandNum() {
	do {
		cout << "Enter a number between 1 and 100: ";
		cin >> guess;

		if (guess > number) {
			cout << "Too high. Try again.\n" << endl;
			++numOfGuesses; // add 1 to guesses counter
		}
		else if (guess < number) {
			cout << "Too low. Try again.\n" << endl;
			++numOfGuesses; // add 1 to guesses counter
		}
		else {
			cout << "Congratulations. You figured out my number. It took you " << numOfGuesses << " guesses." << endl;
		}
	}	while (guess != number);
}
