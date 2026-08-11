#include <iostream>
#include <string>
#include <algorithm> // use this to transform string to lowercase characters
// https://www.delftstack.com/howto/cpp/how-to-convert-string-to-lower-case-in-cpp/

using namespace std;

int main() {

    string playerAction;

    playerAction = "make 1st decision"; // set playerChoice to "make decision" to allow for using a
    // while loop in order to issue correction upon invalid decision.

    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You stand at a crossroads in a mysterious forest." << endl;
    cout << "Do you want to go 'left', 'right' or 'forward'? ";

    while (playerAction == "make 1st decision") { 
        
        // create while loop to allow for incorrect entry
        // and correction

        cin >> playerAction; // input player decision
        transform(playerAction.begin(), playerAction.end(), playerAction.begin(), ::tolower);
        // use this to convert to lowercase letters. It allows for uppercase entries and
        // words having a mix of upper and lowercase letters.

    
        if (playerAction == "left") {
            cout << "\nYou discover a hidden treasure chest!" << endl;
            cout << "Inside you find 100 gold coins." << endl;
            break; // use a break statement to break out of if statement and while loop
            // upon a valid decision being implemented.
            // https://cppreference.com/cpp/language/break
        } 
    
    
        else if (playerAction == "right") {
            cout << "\nYou meet a wise old sage." << endl;
            cout << "The sage gives you a magical potion." << endl;
            break;
        } 

        else if (playerAction == "forward") {
            cout << "\nYou have chosen wisely, forsaking gold and magical potions." << endl;
            cout << "I give you the key to a door hidden in the forest." << endl;
            break;
        }
    
        
        else { 
            cout << "\nYour action is not a valid one." << endl;
            cout << "You stand still, unsure of your decision." << endl;
            cout << "Time passes and nothing happens." << endl;
            cout << "Choose from 'left', 'right', or 'forward'! ";
    
        }

        playerAction = "make 1st decision";
         
    }

    playerAction = "make 2nd decision"; // set playerChoice to "next decision" to allow for using a
    // while loop in order to issue correction upon invalid choice.

    cout << "\nYou now have to make a second decision. " << endl;
    cout << "You can either go left, right or forward." << endl;
    cout << "You cannot stand still or go backwards. " << endl;
    cout << "What is your decision? ";

    while (playerAction == "make 2nd decision") {

        // create while loop to allow for incorrect entry
        // and correction. The same logic as that applied above.

        cin >> playerAction;
        transform(playerAction.begin(), playerAction.end(), playerAction.begin(), ::tolower);

        if (playerAction == "left") {

            cout << "\nYou have gained 50 bonus points." << endl;
            cout << "You need to find a key to open a hidden door in the forest. " << endl;
            cout << "To do this you must solve a riddle." << endl;
            cout << "Riddle: if Bilbo Baggins ..." << endl;
            break;

        }

        if (playerAction == "right") {

            cout << "\nYou have gained 50 bonus points." << endl;
            cout << "You need to find a key to open a hidden door in the forest. " << endl;
            cout << "To do this you must solve a riddle." << endl;
            cout << "Riddle: if Gandalf ..." << endl;
            break;

        }

        if (playerAction == "forward") {

            cout << "\nYou have gained 50 bonus points." << endl;
            cout << "You need to find a key to open a hidden door in the forest. " << endl;
            cout << "To do this you must solve a riddle." << endl;
            cout << "Riddle: if Elrond ..." << endl;
            break;

        } 

        else { 
            cout << "\nYour decision is not a valid one." << endl;
            cout << "You stand still, unsure of your choice." << endl;
            cout << "Time passes and nothing happens." << endl;
            cout << "Choose from 'left', 'right', or 'forward', but not 'backwards'" << endl;
            cout << "or staying put! ";
        }

        playerAction = "make 2nd decision";
        

    }

    cout << "\nWhere do we go from here?" << endl;
    
    return 0;
}