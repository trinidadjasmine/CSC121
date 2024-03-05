#pragma once

class ReturnValuesExamples {
private:

public:
	char foo1(char aLetter); // Return by Value
	char& foo2(char aLetter); // Return by Reference
	char* foo3(char aLetter); // Return by Pointer
	char& foo4(char &aLetter); // Pass and Return by Reference
};
