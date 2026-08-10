#include <iostream>
#include <string>
#include <algorithm> // use this to transform string to lowercase characters
// https://www.delftstack.com/howto/cpp/how-to-convert-string-to-lower-case-in-cpp/

using namespace std;

int main() {

    string playerChoice;

    playerChoice = "make 1st decision"; // set playerChoice to "make decision" to allow for using a
    // while loop in order to issue correction upon invalid choice.

    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You stand at a crossroads in a mysterious forest." << endl;
    cout << "Do you want to go 'left', 'right' or 'forward'? ";

    while (playerChoice == "make 1st decision") { 
        
        // create while loop to allow for incorrect entry
        // and correction

        cin >> playerChoice; // input player choice
        transform(playerChoice.begin(), playerChoice.end(), playerChoice.begin(), ::tolower);
        // use this to convert to lowercase letters. It allows for uppercase entries and
        // words having a mix of upper and lowercase letters.

    
        if (playerChoice == "left") {
            cout << "\nYou discover a hidden treasure chest!" << endl;
            cout << "Inside you find 100 gold coins." << endl;
            break; // use a break statement to break out of if statement and while loop
            // upon a valid choice being implemented.
            // https://cppreference.com/cpp/language/break
        } 
    
    
        else if (playerChoice == "right") {
            cout << "\nYou meet a wise old sage." << endl;
            cout << "The sage gives you a magical potion." << endl;
            break;
        } 

        else if (playerChoice == "forward") {
            cout << "\nYou have chosen wisely, forsaking gold and magical potions." << endl;
            cout << "I give you the key to a door hidden in the forest." << endl;
            break;
        }
    
        
        else { 
            cout << "\nYour choice is not a valid one." << endl;
            cout << "You stand still, unsure of your choice." << endl;
            cout << "Time passes and nothing happens." << endl;
            cout << "Choose from 'left', 'right', or 'forward'! ";
    
        }

        playerChoice = "make 1st decision";
         
    }

    playerChoice = "make 2nd decision"; // set playerChoice to "next decision" to allow for using a
    // while loop in order to issue correction upon invalid choice.

    cout << "\nYou now have to make a second choice. " << endl;
    cout << "You can either go left, right or forward." << endl;
    cout << "You cannot stand still or go backwards. " << endl;
    cout << "What is your choice? ";

    while (playerChoice == "make 2nd decision") {

        // create while loop to allow for incorrect entry
        // and correction. The same logic as that applied above.

        cin >> playerChoice;
        transform(playerChoice.begin(), playerChoice.end(), playerChoice.begin(), ::tolower);

        if (playerChoice == "left") {

            cout << "\nYou have gained 50 bonus points." << endl;
            cout << "You need to find a key to open a hidden door in the forest. " << endl;
            cout << "To do this you must solve a riddle." << endl;
            cout << "Riddle: if Bilbo Baggins ..." << endl;
            break;

        }

        if (playerChoice == "right") {

            cout << "\nYou have gained 50 bonus points." << endl;
            cout << "You need to find a key to open a hidden door in the forest. " << endl;
            cout << "To do this you must solve a riddle." << endl;
            cout << "Riddle: if Gandalf ..." << endl;
            break;

        }

        if (playerChoice == "forward") {

            cout << "\nYou have gained 50 bonus points." << endl;
            cout << "You need to find a key to open a hidden door in the forest. " << endl;
            cout << "To do this you must solve a riddle." << endl;
            cout << "Riddle: if Elrond ..." << endl;
            break;

        } 

        else { 
            cout << "\nYour choice is not a valid one." << endl;
            cout << "You stand still, unsure of your choice." << endl;
            cout << "Time passes and nothing happens." << endl;
            cout << "Choose from 'left', 'right', or 'forward', but not 'backwards'" << endl;
            cout << "or staying put! ";
        }

        playerChoice = "make 2nd decision";
        

    }

    cout << "\nWhere do we go from here?" << endl;
    
    return 0;
}