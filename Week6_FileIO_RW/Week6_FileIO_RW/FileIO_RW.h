#pragma once
class FileIO_RW
{
private:
	int myNumbers[20] = { 0 };
	int total = 0;
	double average = 0;

public:
	void readData(); // read data into array from data.txt
	void calcTotal(); // calculate the total 
	void calcAvg(); // now calculate the average
	void writeData(); // write the data, its total and average
			// to answers.txt
	void showMenu();
};