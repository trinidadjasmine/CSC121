#include "InterestEarned.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void InterestEarned::calcInt() {
	cout << "Enter your principal, interest rate, and times interest is compounded per year: ";
	cin >> principal >> rate >> compound;
	balance = principal * (pow(1 + ((rate / 100) / compound), compound));
	interest = balance - principal;
}

void InterestEarned::displayInt() {
	cout << "Interest Rate: " << setw(20) << rate << "%" << endl;
	cout << showpoint << "Times Compounded: " << setw(16) << compound << endl;
	cout << "Principal: " << setw(17) << "$ " << principal << endl;
	cout << fixed << setprecision(2) << "Interest: " << setw(20) << "$   " << interest << setw(4) << endl;
	cout << "Final Balance: " << setw(13) << "$ " << balance << endl;
}
