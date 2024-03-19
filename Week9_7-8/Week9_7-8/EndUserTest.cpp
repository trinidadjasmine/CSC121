#include "DetermineValues.h"
#include "limits.h"
#include <iostream>
using namespace std;

// Client Program

/*************************************
 *                main               *
 *************************************/
int main()
{
	int num1 = -1;
	bool status = true;
	// SimpleStat statHelper;
	SimpleStat s1(0, 0, 0, INT_MAX);
	cout << "Please enter the set of non-negative integer \n";
	cout << "values you want to average. Separate them with \n";
	cout << "spaces and enter -1 after the last value. \n\n";
	// 10 20 30 -1
	// cin >> num1;
	while (status)
	{
		cin >> num1;
		status = s1.addNumber(num1); // sum = 10, largest = 10
	}
	cout << "\nYou entered " << s1.getCount() << " values. \n";
	cout << "The largest value was " << s1.getLargest() << endl;
	cout << "The average value was " << s1.calcAverage() << endl;
	cout << "The smallest value was " << s1.getSmallest() << endl;

	return 0;
}