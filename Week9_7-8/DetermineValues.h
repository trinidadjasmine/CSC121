#pragma once

class SimpleStat
{
private:
	int largest;            // The largest number received so far  
	int sum;                // The sum of the numbers received
	int count;              // How many numbers have been received
	int smallest;			// The smallest number received so far

	bool isNewLargest(int num); // This is a private class function
	bool isNewSmallest(int num);

public:

	SimpleStat();           // Default constructor
	// SimpleStat(int a1, int a2, int a3); // Overloaded constructor
	SimpleStat(int a1, int a2, int a3, int a4); // Overloaded constructor
	~SimpleStat();
	bool addNumber(int);
	double calcAverage();

	int getLargest()
	{
		return largest;
	}

	int getCount()
	{
		return count;
	}

	int getSum()
	{
		return sum;
	}

	int getSmallest()
	{
		return smallest;
	}
};
