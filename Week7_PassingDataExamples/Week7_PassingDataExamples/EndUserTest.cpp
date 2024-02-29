#include "PassingData.h"
#include <iostream>
using namespace std;

int main() {
	PassingData p;

	int i = 10;

	p.foo1(i);
	cout << "main: line 10: i = " << i << endl;

	p.foo2(i);
	cout << "main: line 13: i = " << i << endl;

	p.foo3(&i); // addressOf operator to get the memory where the i value is stored
	cout << "main: line 16: i = " << i << endl;

	return 0;
}