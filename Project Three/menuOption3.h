#include <iostream>
#include <fstream>
#include <map>
#include <string>

void menuOption3() {
    // Open the input file
    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");

    if (!inputFile) {
        std::cerr << "Error: could not open input file" << std::endl;
        return;
    }

    // Create a map to store the item counts
    std::map<std::string, int> itemCounts;

    // Read the input file line by line
    std::string line;
    while (std::getline(inputFile, line)) {
        // Split the line into items
        size_t startPos = 0;
        while (startPos < line.size()) {
            // Find the next comma
            size_t commaPos = line.find(',', startPos);

            // Extract the item
            std::string item = line.substr(startPos, commaPos - startPos);

            // Increment the item count
            itemCounts[item]++;

            // Update the start position for the next item
            if (commaPos != std::string::npos) {
                startPos = commaPos + 1;
            }
            else {
                startPos = line.size();
            }
        }
    }

    // Find the maximum item count
    int maxCount = 0;
    for (const auto& pair : itemCounts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }

    // Print the histogram
    std::cout << "Histogram:" << std::endl;
    for (const auto& pair : itemCounts) {
        std::cout << pair.first << ": ";
        for (int i = 0; i < pair.second; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Close input file
    inputFile.close();


}
