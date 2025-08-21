// Your Name
// Date: August 16, 2025
// Purpose: Implementation file for GroceryTracker class - handles file I/O and frequency tracking

#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Constructor - loads data from file and creates backup automatically
GroceryTracker::GroceryTracker() {
    loadDataFromFile();          // read input file and populate map
    createBackupFile();          // create frequency.dat backup file
}

// Private helper: reads input file and populates the frequency map
void GroceryTracker::loadDataFromFile() {
    ifstream inputFile("CS210_Project_Three_Input_File.txt");

    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file!" << endl;
        return;
    }

    string item;
    while (getline(inputFile, item)) {  // read each line (item name)
        if (!item.empty()) {           // skip empty lines
            itemFrequency[item]++;     // increment count for this item
        }
    }

    inputFile.close();
    cout << "Data loaded successfully from input file." << endl;
}

// Private helper: creates frequency.dat backup file
void GroceryTracker::createBackupFile() const {
    ofstream backupFile("frequency.dat");

    if (!backupFile.is_open()) {
        cout << "Error: Could not create backup file!" << endl;
        return;
    }

    // write each item and its frequency to backup file
    for (const auto& pair : itemFrequency) {
        backupFile << pair.first << " " << pair.second << endl;
    }

    backupFile.close();
    cout << "Backup file 'frequency.dat' created successfully." << endl;
}

// Menu Option 1: search for specific item frequency
int GroceryTracker::searchItem(const string& item) const {
    auto it = itemFrequency.find(item);  // look for item in map

    if (it != itemFrequency.end()) {     // if found
        return it->second;               // return the frequency
    }
    return 0;                           // item not found, return 0
}

// Menu Option 2: print list of all items with their frequencies
void GroceryTracker::printFrequencyList() const {
    cout << "\nItem Frequency List:" << endl;
    cout << "===================" << endl;

    for (const auto& pair : itemFrequency) {
        cout << pair.first << " " << pair.second << endl;
    }
    cout << endl;
}

// Menu Option 3: print histogram with asterisks
void GroceryTracker::printHistogram() const {
    cout << "\nItem Frequency Histogram:" << endl;
    cout << "========================" << endl;

    for (const auto& pair : itemFrequency) {
        cout << left << setw(15) << pair.first;  // left-align item name

        // print asterisks equal to frequency
        for (int i = 0; i < pair.second; ++i) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}