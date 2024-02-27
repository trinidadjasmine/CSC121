#include "MultiDim.h"
#include <fstream>
#include <iostream>
using namespace std;

void MultiDim::readData() {
	// create inFile stream to myData.txt file
	ifstream inFile("myData.txt");

	// inFile.open("myData.txt"); 
	// line 6 combines line 8, so line 8 is no longer needed

	// i tracks row #, starting at 0
	for (int i = 0; i < 3; i++) { // start of outer loop
		// j tracks column # for a fixed row 
		for (int j = 0; j < 4; j++) { // start of inner loop
			inFile >> myMatrix[i][j];
		} // end of inner loop
	} // end of outer loop

	inFile.close();
}

void MultiDim::displayData() {
	for (int i = 0; i < 3; i++) { // start of outer loop;
		// j tracks column # for a fixed row 
		for (int j = 0; j < 4; j++) { // start of inner loop
			cout << myMatrix[i][j] << " ";
		} // end of inner loop
		cout << endl;
	} // end of outer loop
}

void MultiDim::displayData_v2() {
	for (int i = 0; i < 3; i++) {
		total = 0;
		for (int j = 0; j < 4; j++) {
			// int total = 0;
			// rowTotal[i] += myMatrix[i][j];
			total += myMatrix[i][j];
			rowTotal[i] = total;
			// rowTotal[i] += myMatrix[i][j];
			cout << myMatrix[i][j] << " ";
		}
		// cout << rowTotal[i];
		// cout << total;
		cout << rowTotal[i];
		cout << endl;

		grandTotal += rowTotal[i];
	}
	cout << "\nGrand Total: " << grandTotal;
}