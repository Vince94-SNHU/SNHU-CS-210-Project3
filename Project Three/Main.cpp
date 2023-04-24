#include <iostream>
#include "menuOption1.h" // include the menuOption1 module
#include "menuOption2.h" // include the menuOption2 module
#include "menuOption3.h" // include the menuOption2 module
#include "menuOption4.h" // include the menuOption2 module
#include "menuOption5.h" // include the menuOption2 module

using namespace std;

int main() {
    int option;
    char returnToMenu;
    do {
        cout << "Please select an option:" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "| Option |         Menu Item            |" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "|   1    |          Data Search         |" << endl;
        cout << "|   2    |  List of Items and Counts    |" << endl;
        cout << "|   3    |     Export Data (Histogram)  |" << endl;
        cout << "|   4    |           Edit List          |" << endl;
        cout << "|   5    |         Exit Program         |" << endl;
        cout << "-----------------------------------------" << endl << endl;
        cin >> option;
        switch (option) {
        case 1:
            // Call the menuOption1 function
            cout << "You selected Data Search" << endl << endl;
            menuOption1();
            break;
        case 2:
            // Code to handle export data (list) option
            cout << "You selected Dispay a list of items counts" << endl << endl;
            menuOption2();
            break;
        case 3:
            // Code to handle export data (histogram) option
            cout << "You selected Export Data (Histogram)" << endl << endl;
            menuOption3();
            break;
        case 4:
            cout << "You have selected to edit /CS210_Project_Three_Input_File.txt" << endl << endl;
            menuOption4();
            break;
        case 5:
            cout << "You have selected to end the program" << endl << endl;
            menuOption5();
            break;
        default:
            cout << "Invalid option selected. Please try again." << endl;
        }
        if (option != 4) {
            cout << "Would you like to return to the main menu? (y/n)" << endl;
            cin >> returnToMenu;
        }
    } while (option != 4 && returnToMenu == 'y');
    return 0;
}
