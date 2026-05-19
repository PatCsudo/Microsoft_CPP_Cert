/* https://medium.com/@ryan_forrester_/reading-csv-files-in-c-how-to-guide-35030eb378ad */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// passing by reference in Modern C++ ?
vector<vector<string>> readCSV(const string& filename) {
    vector<vector<string>> data;
    ifstream file("pendulum_data.csv");
    
    if (!file.is_open()) {
        cerr << "Failed to open file: " << "pendulum_data.csv" << endl;
        return data;
    }

    string line;
    while (getline(file, line)) {
        vector<string> row;
        stringstream ss(line);
        string cell;

        while (getline(ss, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    file.close();
    return data;
}

int main() {
    auto data = readCSV("example.csv");
    
    for (const auto& row : data) {
        for (const auto& cell : row) {
            cout << setw(20) << left << cell << "\t";
        }
        cout << endl;
    }

    return 0;
}