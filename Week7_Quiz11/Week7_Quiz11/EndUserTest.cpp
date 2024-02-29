#include "PassingDataSquared.h"
#include <iostream>
using namespace std;

int main() {
	PassingDataSquared p;

	int i = 10;

	p.square1(i);
	cout << "main: line 8 : i = " << i << endl;

	p.square2(i);
	cout << "main: line 13 : i = " << i << endl;

	p.square3(&i);
	cout << "main: line 16 : i = " << i << endl;

	return 0;
}