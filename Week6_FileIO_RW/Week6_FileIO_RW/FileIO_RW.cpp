#include "FileIO_RW.h"
#include <fstream> // fstream >> << 
				   // ifstream >> -- just like cin >>
				   // ofstream << -- just like cout << 
#include <iostream> // cin >>, cout << 
using namespace std;

void FileIO_RW::readData()
{
	fstream fileInput;

	fileInput.open("data.txt");

	int i = 0;
	while (!fileInput.eof())
	{
		fileInput >> myNumbers[i];
		i++;
	}
	fileInput.close();
	cout << "\nNumber of numbers read: " << i << endl;
	cout << "Numbers read from data.txt: " << endl;
	for (int j = 0; j < i; j++)
	{
		cout << myNumbers[j] << " ";
	}
	cout << endl;
}

void FileIO_RW::calcTotal()
{
	for (int i = 0; i<20; i++)
	{
		total = total + myNumbers[i]; 
	}
	cout << "\nTotal = " << total << endl;
}

void FileIO_RW::calcAvg()
{
	average = static_cast<double>(total) / 20;
	cout << "\nAverage = " << average << endl;
}

void FileIO_RW::writeData()
{
	ofstream outputFile;

	outputFile.open("answers.txt");
	for (int i = 0; i < 20; i++)
	{
		outputFile << myNumbers[i] << endl;
	}
	outputFile << "\nTotal = " << total << endl;
	outputFile << "\nAverage = " << average << endl;
	outputFile.close();
}

void FileIO_RW::showMenu() {
	int choice;

	cout << "   Read and Write Data\n\n";
	cout << "1. Read & Write Data\n";
	cout << "2. Quit\n\n";
	cin >> choice;

	// Write and Calculate Data
	if (choice == 1) {
		// Read Data
		fstream fileInput;

		fileInput.open("data.txt");

		int i = 0;
		while (!fileInput.eof())
		{
			fileInput >> myNumbers[i];
			i++;
		}
		fileInput.close();
		cout << "\nNumber of numbers read: " << i << endl;
		cout << "Numbers read from data.txt: " << endl;
		for (int j = 0; j < i; j++)
		{
			cout << myNumbers[j] << " ";
		}
		cout << endl;

		// Calculate Total
		for (int i = 0; i < 20; i++)
		{
			total = total + myNumbers[i];
		}
		cout << "\nTotal = " << total << endl;

		// Calculate Average
		average = static_cast<double>(total) / 20;
		cout << "\nAverage = " << average << endl;

		// Write Data
		ofstream outputFile;

		outputFile.open("answers.txt");
		for (int i = 0; i < 20; i++)
		{
			outputFile << myNumbers[i] << endl;
		}
		outputFile << "\nTotal = " << total << endl;
		outputFile << "\nAverage = " << average << endl;
		outputFile.close();
	}
	else if (choice != 2) {
		cout << "\nThe valid choices are 1 through 3. Please run the program again.\n";
	}
	cout << "\nHave a nice day!\n";
}

