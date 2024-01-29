#pragma once

class InterestEarned {
private:
	double rate = 0.0;
	int compound = 0;
	double principal = 0.0; 
	double interest = 0.0;
	double balance = 0.0;

public:
	void calcInt();
	void displayInt();
};