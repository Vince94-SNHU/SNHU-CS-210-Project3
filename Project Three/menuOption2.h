#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <iomanip>

void menuOption2() {
    // Open the input file
    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");

    if (!inputFile) {
        std::cerr << "Error: could not open input file" << std::endl;
        return;
    }

    // Define a map to store the item frequencies
    std::map<std::string, int> itemFrequency;

    // Read the input file and populate the map
    std::string itemName;
    while (inputFile >> itemName) {
        itemFrequency[itemName]++;
    }

    // Calculate the maximum item name length
    size_t maxItemNameLength = 20;
    for (const auto& item : itemFrequency) {
        maxItemNameLength = std::max(maxItemNameLength, item.first.length());
    }

    // Display the item frequencies as a table
    std::cout << std::left << std::setw(maxItemNameLength) << "Item"
        << std::right << "Frequency" << std::endl;
    std::cout << std::string(maxItemNameLength + 20, '-') << std::endl;
    for (const auto& item : itemFrequency) {
        std::cout << std::left << std::setw(maxItemNameLength) << item.first
            << std::right << item.second << std::endl;
    }

    // Close input file
    inputFile.close();

    // Create the output data file
    std::ofstream outputFile("frequency.dat");
    if (!outputFile) {
        std::cerr << "Error: could not create output file" << std::endl;
        return;
    }

    // Write the item frequencies to the output file
    outputFile << std::left << std::setw(maxItemNameLength) << "Item"
        << std::right << "Frequency" << std::endl;
    outputFile << std::string(maxItemNameLength + 20, '-') << std::endl;
    for (const auto& item : itemFrequency) {
        outputFile << std::left << std::setw(maxItemNameLength) << item.first
            << std::right << item.second << std::endl;
    }

    // Close output file
    outputFile.close();

    std::cout << "Output file saved to frequency.dat" << std::endl;
}
