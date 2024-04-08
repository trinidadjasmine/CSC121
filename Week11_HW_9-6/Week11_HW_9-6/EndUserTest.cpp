#include "StringSelectionSort.h"
#include <iostream>
using namespace std;

int main() {
    StringSelectionSort s;

    const int SIZE = 20;
    string name[SIZE] =
    { "Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
    "Sanchez, Manny",  "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
     "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",	"Whitman, Jean",
     "Moretti, Bella", "Wu, Eric", 	"Patel, Renee",   "Harrison, Rose",
     "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",	"Holland, Beth" };

    // Display the unsorted names
    cout << "The unsorted names: " << endl;
    s.displayNames(name, SIZE);

    // Run selectionSort to sort the names
    s.selectionSortNames(name, SIZE);

    // Display the sorted names
    cout << "The sorted names: " << endl;
    s.displayNames(name, SIZE);

    return 0;
}
