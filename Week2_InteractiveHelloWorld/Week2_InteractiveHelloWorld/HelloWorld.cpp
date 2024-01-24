#include "HelloWorld.h"
#include <iostream>
#include <string>
using namespace std;

void HelloWorld::sayHelloWorld() {
	cout << "Hello " << myFirstName << ", nice to meet you!\n";
}

void HelloWorld::askName() {
	cout << "Please enter your first name: ";
	cin >> myFirstName;
}

void HelloWorld::askMyAge() {
	cout << "Please enter your age: ";
	cin >> myAge;
}
