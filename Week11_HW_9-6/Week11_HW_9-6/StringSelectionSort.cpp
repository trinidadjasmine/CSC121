#include "StringSelectionSort.h"
#include <iostream>
using namespace std;

void StringSelectionSort::selectionSortNames(string arrayOfNames[], int sizeOfArray) {
    int minIndex;
    string minValue;

    for (int i = 0; i < (sizeOfArray - 1); i++)
    {
        minIndex = i;
        minValue = arrayOfNames[i];

        for (int index = i + 1; index < sizeOfArray; index++)
        {
            if (arrayOfNames[index] < minValue)
            {
                minValue = arrayOfNames[index];
                minIndex = index;
            }
        }
        swap(arrayOfNames[minIndex], arrayOfNames[i]);
    }
}

void StringSelectionSort::swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

void StringSelectionSort::displayNames(string arrayOfNames[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arrayOfNames[i] << endl;
    }
    cout << endl;
}
