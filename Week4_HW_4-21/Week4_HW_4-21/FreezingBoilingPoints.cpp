#include "FreezingBoilingPoints.h"
#include <iostream>
using namespace std;

void FreezingBoilingPoints::userInputTemp() {
	cout << "Please enter a temperature: ";
	cin >> temp;
	cout << "\nAt " << temp << " F the following substances"
		<< " will either freeze or boil.\n";
}

void FreezingBoilingPoints::calcTemps() {
	// Assigning values 'O', 'E', 'M', or 'W' to the char
	// variables freeze and boil. These values will be used
	// for the cases in the Switch statement.

	// Calculating freezing temps
	if (temp <= -362) {
		freeze = 'O';
	}
	else if (temp <= -173) {
		freeze = 'E';
	}
	else if (temp <= -38) {
		freeze = 'M';
	}
	else if (temp <= 32) {
		freeze = 'W';
	}

	// Calculating boiling temps
	if (temp >= -306) {
		boil = 'O';
	}
	else if (temp >= 172) {
		boil = 'E';
	}
	else if (temp >= 212) {
		boil = 'W';
	}
	else if (temp >= 676) {
		boil = 'M';
	}
}

void FreezingBoilingPoints::displaySubstances() {
	// The following Switch statements take in the values from
	// chars freeze and boil and then cout which substance will
	// freeze or boil at those temps based on the calcs above.
	
	// Freeze Switch
	cout << "\nFreeze: " << endl;
	cout << "--------" << endl;
	 
	switch (freeze) {
		case 'O': cout << "Oxygen\n\n"; break;
		case 'E': cout << "Ethyl alcohol\n\n"; break;
		case 'M': cout << "Mercury\n\n"; break;
		case 'W': cout << "Water\n\n"; break; // Not a necessary break but I'm leaving it for consistency
	}

	// Boil Switch
	cout << "\nBoil: " << endl;
	cout << "--------" << endl;

	switch (boil) {
		case 'O': cout << "Oxygen\n\n"; break;
		case 'E': cout << "Ethyl alcohol\n\n"; break;
		case 'M': cout << "Mercury\n\n"; break;
		case 'W': cout << "Water\n\n"; break; // Not a necessary break but I'm leaving it for consistency
	}
}
