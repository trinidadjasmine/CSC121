#pragma once

class RNMaths {
private:
	int total = 0; // running total of sum of integers
	int average = 0;
	int myNumbers[25]; // array of 25 integers

public:
	void generateRandNums();
	void calcTotal();
	void addTenTotal();
	void displayArrayTotalAverage();
	void calcAverage();
};
