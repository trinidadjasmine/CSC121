#include "Algos.h"
#include <iostream>
using namespace std;

int Algos::linearSearch(int key, int* myNums, int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		if (myNums[i] == key) {
			return i;
		}
	}
	return -1;
}

void Algos::printIndex(int key, int* myNums, int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		cout << myNums[i] << " ";
	}
	cout << endl;

	int returnValue = Algos::linearSearch(key, myNums, sizeOfArray);
	if (returnValue == -1) {
		cout << key << " was not found in the array" << endl;
		return;
	}
	cout << key << " found at index " << returnValue << endl;
}
