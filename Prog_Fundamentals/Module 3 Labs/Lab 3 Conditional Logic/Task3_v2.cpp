#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int playerLevel;

    char difficulty;

    // Get player level with initial validation

    cout << "Enter your player level (1-20): ";
    cin >> playerLevel;

    if (playerLevel < 1 || playerLevel > 20) {

        cout << "Invalid player level! Setting to level 1!" << endl;
        playerLevel = 1;

    }

    if (playerLevel == 16) {
        cout << "BONUS POINTS: 3000!" << endl;
    }
    if (playerLevel == 17) {
        cout << "BONUS POINTS: 3500!" << endl;
    }
    if (playerLevel == 18) {
        cout << "BONUS POINTS: 4000!" << endl;
    }
    if (playerLevel == 19) {
        cout << "BONUS POINTS: 4500!" << endl;
    }
    if (playerLevel == 20) {
        cout << "BONUS POINTS: 5000!" << endl;
    }

    // Get difficulty choice
    cout << "Choose difficulty: " << endl;
    cout << "E - Easy" << endl;
    cout << "M - Medium" << endl;
    cout << "H - Hard" << endl;
    cout << "Enter choice (E/M/H): ";
    cin >> difficulty;

    // Process difficulty switch
    switch (difficulty) {

        case 'E': // both 'E' and 'e' implement the easy difficulty mode. 
        // Nothing in case 'E' results in automatic switch to 'e'. Uppercase and lowercase
        case 'e':
            cout << "Easy mode selected." << endl;
            if (playerLevel >= 5) {
                cout << "Bonus: Extra health for experienced player." << endl;
            }
            break;

        case 'M':
        case 'm':
            cout << "Medium mode selected." << endl;
            if (playerLevel >= 7) {
                cout << "Bonus: special weapon unlocked!" << endl;
            }
            break;
        
        case 'H':
        case 'h':
            cout << "Hard mode selected. Good luck!" << endl;
            if (playerLevel >=8) {
                cout << "Bonus: Elite status achieved!" << endl;
            } 
        
            else {
                cout << "Warning: This will be challenging for your level." << endl;
            
            }
            break;

        default:
            cout << "Invalid choice! Defaulting to Easy mode." << endl;
            difficulty = 'E';
            break;
    }

    cout << "Game starting with Level " << playerLevel << " and difficulty " 
         << difficulty << ", character ..."  << endl;


    return 0;
}