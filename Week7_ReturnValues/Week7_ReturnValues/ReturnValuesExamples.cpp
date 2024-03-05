#include "ReturnValuesExamples.h"

// Pass a small letter, return a capital letter

// Pass by Value
char ReturnValuesExamples::foo1(char aLetter) {
	int temp;

	// Converting aLetter into Ascii code
	temp = static_cast<int>(aLetter);

	// Subtracting the Ascii code for aLetter
	// by 32 to get the Capital letter Ascii code
	temp = temp - 32;

	// Converting aLetter back into char and returning
	return static_cast<char>(temp);
}

// Pass by Reference
char& ReturnValuesExamples::foo2(char aLetter) {
	char temp = aLetter;

	temp = temp - 32;

	return temp;
} 

// Pass by Pointer
char* ReturnValuesExamples::foo3(char aLetter) {
	char temp = aLetter;

	temp = temp - 32;

	return &temp;
}

// Pass and Return by Reference
char& ReturnValuesExamples::foo4(char& aLetter) {
	aLetter -= 32;

	return aLetter;
}