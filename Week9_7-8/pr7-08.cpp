// This program uses a class with a Boolean function that determines
// if a new value sent to it is the largest value received so far.
#include <iostream>
using namespace std;

class SimpleStat          
{
  private: 
	int largest;            // The largest number received so far  
	int sum;                // The sum of the numbers received
	int count;              // How many numbers have been received
	
	bool isNewLargest(int num); // This is a private class function
	
  public:
	
	SimpleStat();           // Default constructor
	SimpleStat(int a1, int a2, int a3); // Overloaded constructor
	~SimpleStat();
	bool addNumber(int);
	double calcAverage();
	
	int getLargest()
	{  return largest; }

	int getCount()
	{  return count; }

	int getSum()
	{
		return sum;
	}
};

// SimpleStat Class Implementation Code 

/*************************************
 *  SimpleStat Default Constructor   *
 *************************************/
SimpleStat::SimpleStat()
{
	cout << "line 36: constructor called!\n";
	largest = sum = count = 0;
}

/*************************************
 *  SimpleStat Overloaded Constructor   *
 *************************************/
SimpleStat::SimpleStat(int a1, int a2, int a3)
{
	cout << "line 45: overloaded constructor called!\n";
	largest = a1;
	sum = a2;
	count = a3;
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

// Client Program

/*************************************
 *                main               *
 *************************************/
int main()
{
	int num1 = -1;
	bool status = true;
	// SimpleStat statHelper;
	SimpleStat s1(0, 0, 0);
	cout << "Please enter the set of non-negative integer \n"; 
	cout << "values you want to average. Separate them with \n";
	cout << "spaces and enter -1 after the last value. \n\n";
	// 10 20 30 -1
	// cin >> num1;
	while (status)
	{
		cin >> num1;
		status = s1.addNumber(num1); // sum = 10, largest = 10
	}
	cout << "\nYou entered " << s1.getCount() << " values. \n";
	cout << "The largest value was " << s1.getLargest()  << endl;
	cout << "The average value was " << s1.calcAverage() << endl;

	return 0;
}
