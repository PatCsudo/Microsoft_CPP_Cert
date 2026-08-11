#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main () {

    int menuChoice;

    cout << " === GAME MENU === " << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Load Game" << endl;
    cout << "3. View High Scores" << endl;
    cout << "4. Settings" << endl;
    cout << "5. Exit Game" << endl;
    cout << "6. Help/Instructions" << endl;
    cout << "Enter your choice (1-6): ";

    cin >> menuChoice;

    switch(menuChoice) {

        case 1: 
            cout << "\nStarting new adventure ... " << endl;
            cout << "Welcome, brave explorer!" << endl;
            break; 
            
            /* removing the break statement will result in the above messages and
            and those from case 2 being printed. The break statement in case 2 will then result
            in the programme terminating. */
        
        case 2:
            cout << "\nLoading saved game ... " << endl;
            cout << "Game loaded successfully." << endl;
            break;
        
        case 3:
            cout << "\n === HIGH SCORES === " << endl;
            cout << "1. Alice - 15,000 points" << endl;
            cout << "2. Bob - 12,000 points" << endl;
            break;

        case 4:
            cout << "\nOpening settings menu ... " << endl;
            cout << "Sound: ON, Difficulty: Medium" << endl;
            break;
        
        case 5:
            cout << "\nThank you for playing! Goodbye!" << endl;
            break;
        
        case 6:
            cout << "\nThis is a single player game. The aim of the game is ... " << endl;
            break;

        default:
            cout << "\nInvalid choice! Please select 1-6." << endl;
            break;

    }

    return 0;
}