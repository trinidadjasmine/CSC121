#pragma once

class MultiDim {
private:
	// create a 2D array
	// 3 rows, 4 columns
	int myMatrix[3][4];
	int rowTotal[3];
	int total;
	int grandTotal = 0;

public:
	void readData();
	void displayData();
	void displayData_v2();
};
