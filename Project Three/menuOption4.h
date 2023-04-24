#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib> // for system() function

void menuOption4() {
    // Open the input file
    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");

    if (!inputFile) {
        std::cerr << "Error: could not open input file" << std::endl;
        return;
    }
        inputFile.close();

            // Open the input file using the default program associated with its file type
            system("start CS210_Project_Three_Input_File.txt");
        }

