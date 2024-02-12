#pragma once

class FreezingBoilingPoints {
private:
	int temp;
	char freeze, boil; // chars for the Switch statement

public:
	void userInputTemp();
	void calcTemps();
	void displaySubstances();
};