#include "MyMiscStuff.h"
#include <string>
#include <iostream>
using namespace std;

void MyMiscStuff::testSizeDatatypes() {
	int i = 5; // 4 bytes of memory
	float f = 5.5; // 4 bytes of memory
	double d = 5.55555; // 8 bytes of memory
	char c = 'K'; // 1 byte of memory
	bool b = true; // 1 bit = 1/8 byte of memory
	// string depends on content
	string s = "Person with the Golden Handshake!";

	cout << "Size of int variables: " << sizeof(i) 
		<< " bytes." << endl;
	cout << "Size of float variables: " << sizeof(f)
		<< " bytes." << endl;
	cout << "Size of double variables: " << sizeof(d)
		<< " bytes." << endl;
	cout << "Size of char variables: " << sizeof(c)
		<< " bytes." << endl;
	cout << "Size of bool variables: " << sizeof(b)
		<< " bit." << endl;
	cout << "Size of string variables: " << s.size()
		<< " bytes." << endl;
}

void MyMiscStuff::testArithmeticOperators() {
	int n1 = 69;
	int n2 = 12;
	double d = static_cast<double>(n1) / n2; // quotient
	int remainder = n1 % n2; // remainder

	cout << "d = " << n1 << "/" << n2 << " = "
		<< d << endl;
	cout << "d = " << n1 << "%" << n2 << " = "
		<< remainder << endl;
}
