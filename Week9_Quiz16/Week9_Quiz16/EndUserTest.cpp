#include "Algos.h"
#include <iostream>
using namespace std;

int main() {
	Algos a;

	int someNumbers[10] = { 10, 15, 12, 18, 6, 2, 1, -20, 0, 100 };
	int userNum = -1;

	a.linearSearch(userNum, someNumbers, 10);

	return 0;
}
