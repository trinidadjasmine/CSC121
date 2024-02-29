#pragma once

class PassingData {
private:

public:
	void foo1(int aNumber); // pass by value
	void foo2(int& aNumber); // pass by reference
	void foo3(int* aNumber); // pass by pointer
};
