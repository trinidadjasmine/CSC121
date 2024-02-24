#pragma once

class RandNumGuessingGame {
private:
	int guess = 0;
	int number = 0;
	int minValue = 1, maxValue = 100;
	int numOfGuesses = 0;

public:
	void calcRandNum();
	void guessRandNum();
};
