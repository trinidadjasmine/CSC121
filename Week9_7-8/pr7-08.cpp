#include "DetermineValues.h"
#include <iostream>
using namespace std;

// SimpleStat Class Implementation Code 

/*************************************
 *  SimpleStat Default Constructor   *
 *************************************/
SimpleStat::SimpleStat()
{
	cout << "line 36: constructor called!\n";
	largest = sum = count = smallest = 0;
}

/*************************************
 *  SimpleStat Overloaded Constructor   *
 *************************************/
SimpleStat::SimpleStat(int a1, int a2, int a3, int a4)
{
	cout << "line 45: overloaded constructor called!\n";
	largest = a1;
	sum = a2;
	count = a3;
	smallest = a4;
}

SimpleStat::~SimpleStat()
{
	cout << "line 41: object being destroyed!\n";
}

/*************************************
 *      SimpleStat::addNumber        *
 *************************************/
bool SimpleStat::addNumber(int num)
{   bool goodNum = true;
	if (num >= 0)              // If num is valid
	{
		sum += num;            // Add it to the sum
		count++;               // Count it
		if(isNewLargest(num))  // Find out if it is
			largest = num;     // the new largest
		if (isNewSmallest(num))  // Find out if it is
			smallest = num;
	}
	else                       // num is invalid
		goodNum = false;      

	return goodNum;
}

/*************************************
 *     SimpleStat::isNewLargest      *
 *************************************/
bool SimpleStat::isNewLargest(int num)
{
	if (num > largest)
		return true;
	else
		return false;
}

/*************************************
 *      SimpleStat::calcAverage      *
 *************************************/
double SimpleStat::calcAverage()
{  
	if (count > 0)
		return static_cast<double>(sum) / count;
	else
		return 0;
}

bool SimpleStat::isNewSmallest(int num) {
	smallest = min(smallest, num);

	return true;
}
