#include "Algos.h"
#include <iostream>
using namespace std;

int Algos::linearSearch(int key, int* myNums, int sizeOfArray) {
    while (true) {
        cout << "Enter number looking for: ";
        cin >> key;

        if (key == -1) { break; }

        for (int i = 0; i < sizeOfArray; i++) {
            cout << myNums[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < sizeOfArray; i++) {
            if (myNums[i] == key) {
                cout << key << " found at index " << i << endl;
                break;
            }

            if (i == sizeOfArray - 1) {
                cout << key << " not found in array" << endl;
            }
        }
    }
    return 0;
}