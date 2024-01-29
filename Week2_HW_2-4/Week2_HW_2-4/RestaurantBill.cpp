#include "RestaurantBill.h"
#include <iostream>
#include <iomanip>
using namespace std;

void RestaurantBill::calculate() {
	mealCost = 44.50;
	taxPercentage = 6.75 / 100;
	tax = taxPercentage * mealCost;
	tip = (mealCost + tax) * .15;
	total = mealCost + tax + tip;
}

void RestaurantBill::display() {
	cout << fixed << setprecision(2) << "Meal Cost:" << setw(5) << "$" << mealCost << endl;
	cout << "Tax:" << setw(11) << "$" << tax << endl;
	cout << "Tip:" << setw(11) << "$" << tip << endl;
	cout << "Total:" << setw(9) << "$" << total << endl;
}