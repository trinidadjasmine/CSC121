#include <iostream>
#include "HealthCM.h"
using namespace std;

int main() {
	HealthCM h;

	h.showMenu();
	h.calcHCMFees();
	h.displayFees();

	return 0;
}
