#pragma once
#include <iostream>
using namespace std;

class StringSelectionSort {
private:
public:
    void selectionSortNames(string arrayOfNames[], int sizeOfArray);
    void swap(string& a, string& b);
    void displayNames(string arrayOfNames[], int sizeOfArray);
};
