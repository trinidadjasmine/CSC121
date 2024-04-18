#include "MyUtility.h"
#include "Inventory.h"
#include <iostream>
#include <fstream>
using namespace std;

void MyUtility::createRecords() {
    // Variables needed to write the file
    Invtry record = { "", 0, 0.0 };
    int numberBytesWrite = -1;

    // Create file object and open file
    fstream inventory("records.txt", ios::out | ios::binary);
    if (!inventory)
    {
        cout << "Error opening file.";
        //return 0;
    }

    numberBytesWrite = sizeof(record);
    cout << "\nSize of inventory record: " << numberBytesWrite << endl;

    // Now write the blank records
    for (int count = 0; count < NUM_RECORDS; count++)
    {
        cout << "Now writing record " << count << endl;
        inventory.write(reinterpret_cast<char*>(&record), numberBytesWrite);
    }

    //Close the file
    inventory.close();
    //return 0;
}

void MyUtility::readRecords() {
    // Buffer used for reading.
    Invtry record;

    // Create and open the file for reading.
    fstream inventory("invtry.dat", ios::in | ios::binary);
    if (!inventory)
    {
        cout << "Error in opening the file.";
        //return 0;
    }

    int recordSize = sizeof(record);
    cout << "Number of bytes to read from dat file: " << recordSize << endl;

    // Now read and display the records
    inventory.read(reinterpret_cast<char*>(&record), recordSize);
    while (!inventory.eof())
    {
        cout << "Description: ";
        cout << record.desc << endl;
        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char*>(&record), sizeof(record));
    }
    inventory.close();
    //return 0;
}

void MyUtility::editRecords() {
    // Variables needed to reead the file
    Invtry record;
    long recNum;

    // Open the file
    fstream inventory("records.txt", ios::in | ios::out |
        ios::binary);
    if (!inventory)
    {
        cout << "Error opening file.";
        //return 0;
    }

    // Move to the desired record and read it into record
    cout << "Which record do you want to edit?";
    cin >> recNum;
    // seekg is for reading (get)
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char*> (&record), sizeof(record));

    // Get new data from user and edit in-memory record						
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: ";
    cout << record.qty << endl;
    cout << "Price: ";
    cout << record.price << endl;
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // Move to the right place in file and write the record
    // seekp is for writing (put)
    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char*> (&record), sizeof(record));

    // Close the file					 
    inventory.close();
    //return 0;
}
