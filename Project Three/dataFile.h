#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

using namespace std;

void createBackupFile(const unordered_map<string, int>& wordCountMap) {
    ofstream backupFile("frequency.dat");

    if (backupFile.is_open()) {
        for (auto const& x : wordCountMap) {
            backupFile << x.first << " " << x.second << "\n";
        }
        backupFile.close();
        cout << "Backup file created successfully." << endl;
    }
    else {
        cout << "Unable to create backup file." << endl;
    }
}
