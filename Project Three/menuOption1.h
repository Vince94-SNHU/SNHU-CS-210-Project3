#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void menuOption1() {
    string inputFileName = "CS210_Project_Three_Input_File.txt";
    ifstream inputFile;
    string wordToFind;
    int wordCount = 0;
    string currentWord;

    // Open input file
    inputFile.open(inputFileName);
    if (!inputFile.is_open()) {
        cout << "Error: could not open file " << inputFileName << endl;
        return;
    }

    // Prompt user for word to find
    cout << "Enter word to find: ";
    cin >> wordToFind;

    // Count occurrences of word in input file
    while (inputFile >> currentWord) {
        if (currentWord == wordToFind) {
            wordCount++;
        }
    }


    // Close input file
    inputFile.close();

    // Output frequency of word
    cout << "The word \"" << wordToFind << "\" appears " << wordCount << " times in the file." << endl;
}
