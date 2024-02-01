#pragma once

class RNMaths {
private:
	int total = 0; // running total of sum of integers
	int myNumbers[20]; // array of 20 integers

public:
	void generateRandNums();
	void calcTotal();
	void addTenTotal();
	void displayArrayTotal();
};
