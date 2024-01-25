#include "MonthlyPayments.h"
#include <iostream>
#include <cmath>
using namespace std;

void MonthlyPayments::calcMP() {
	double annualRate = 0.0;
	int n = 0;
	double el = 0.0;
	double rate = 0.0;
	double payment = 0.0;
	double denominator = 0.0, numerator = 0.0;

	cout << "Enter annual rate, number of payments, "
		<< "amount of loan: ";
	cin >> annualRate >> n >> el;

	rate = annualRate / (100.0 * 12); // converting rate to decimal value
					// example: 6.5% = 0.065

	numerator = rate * pow((1 + rate), n);
	denominator = pow((1 + rate), n) - 1;
	payment = numerator / denominator * el;

	cout << "Loan Amount: $" << el << endl;
	cout << "Monthly Interest Rate: " << rate*100 << "%" << endl;
	cout << "Number of Payments: " << n << endl;
	cout << "Monthly Payment: $" << payment << endl;
	cout << "Amount Paid Back: $" << payment * n << endl;
	cout << "Interest Paid: $" << payment * n - el << endl;
}