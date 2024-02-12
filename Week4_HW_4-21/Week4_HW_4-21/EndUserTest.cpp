#include "FreezingBoilingPoints.h"

int main() {
	FreezingBoilingPoints temps;

	temps.userInputTemp();
	temps.calcTemps();
	temps.displaySubstances();

	return 0;
}