#pragma once

class RestaurantBill {
private:
	double mealCost = 0.0;
	double taxPercentage = 0.0;
	double tax = 0.0;
	double tip = 0.0;
	double total = 0.0;

public:
	void display();
	void calculate();
};
