#include "MultiDim.h"
#include <fstream>
#include <iostream>
using namespace std;

void MultiDim::readData() {
	// create inFile stream to myData.txt file
	ifstream inFile("myData.txt"); // does the same as line 10

	// inFile.open("myData.txt"); 

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
	// i tracks row #, starting at 0
	for (int i = 0; i < 3; i++) {
		// j tracks column # for a fixed row 
		for (int j = 0; j < 4; j++) {
			cout << myMatrix[i][j] << " ";
		}
		cout << endl;
	}
}

void MultiDim::displayData_v2() {
	ofstream outputFile;

	outputFile.open("answers.txt");

	// Console Output
	for (int i = 0; i < 3; i++) {
		total = 0;
		for (int j = 0; j < 4; j++) {
			total += myMatrix[i][j];
			rowTotal[i] = total;
			cout << myMatrix[i][j] << " ";

			// Answers.txt array output
			outputFile << myMatrix[i][j] << " ";
		}
		cout << rowTotal[i] << endl;

		// Answers.txt rowTotal output
		outputFile << rowTotal[i] << endl;

		grandTotal += rowTotal[i];
	}
	cout << "\nGrand Total: " << grandTotal;

	// Answers.txt grandTotal output
	outputFile << "\nGrand Total: " << grandTotal;
}