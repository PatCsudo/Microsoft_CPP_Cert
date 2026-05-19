#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>

using namespace std;

void fileRead();
int main()
{
    fileRead();
    return 0;
}

void fileRead()
{
    // File pointer
    fstream fin;

    // Open an existing file
    fin.open("pendulum_data.csv", ios::in);

    // Read the data from the file as a string vector
    vector<string> row;
    string line, word, temp;


    while(fin >> temp)
    {
        row.clear();

        // read an entire row and store
        // it in a string variable 'line'
        getline(fin, line);

        // used for breaking words
        stringstream ss(line);

        //cout << line << endl;
        while(getline(ss, word, ','))
        {
            row.push_back(word);
        }

        cout << word << endl;

        
    }


}