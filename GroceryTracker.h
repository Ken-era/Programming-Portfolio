// Name: Kenneth Kimera
// Date: August 16, 2025
// Purpose: Header file for GroceryTracker class - manages item frequency tracking for Corner Grocer

#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency;  // stores item name and count pairs

    // Helper functions
    void loadDataFromFile();               // reads input file and populates map
    void createBackupFile() const;         // creates frequency.dat backup file

public:
    // Constructor - automatically loads data and creates backup
    GroceryTracker();

    // Menu option functions
    int searchItem(const std::string& item) const;     // returns frequency of specific item
    void printFrequencyList() const;                   // prints all items with counts
    void printHistogram() const;                       // prints histogram with asterisks
};

#endif

