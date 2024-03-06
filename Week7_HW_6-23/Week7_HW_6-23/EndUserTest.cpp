#include "PassingValues.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 2;

	cout << "START" << endl;
	cout << "-----------" << endl;
	cout << "main: i = " << i << endl;
	cout << "-----------" << endl;

	PassingValues num;

	num.doubleNum1(i);
	cout << "main: now i = " << i;

	num.doubleNum2(&i);
	cout << "main: now i = " << i << endl;

	return 0;
}