#include <iostream>
#include <cmath> // for mathematical functions

using namespace std;

int main() {

    // Display a welcome message

    cout << "========================================" << endl;
    cout << "        INTERACTIVE CALCULATOR           " << endl;
    cout << "========================================" << endl;
    cout << "This calculator allows you to perform" << endl;
    cout << "various mathematical operations." << endl << endl;

    bool exitProgram = false;
    int choice;

    while(!exitProgram) {
        //Display the menu
        cout << "\nPlease select an operation." << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Square Root" << endl;
        cout << "6. Exponentiation (Power)" << endl;
        cout << "7. Exit" << endl;
        cout << "8. Modulo (Remainder)" << endl;
        cout << "9. Absolute Value" << endl;
        cout << "\nEnter your choice (1-9): ";

        // Get the user's choice
        cin >> choice;

        // Process the choice using conditional statements

        // variables to store the operands
        double num1, num2, result;

        // Process the user's choice using if-else statements

        if (choice == 1) {// Addition
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        }

        else if (choice == 2) { // Subtraction
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << "(" << num2 << ")" << " = " << result << endl;
        }

        else if (choice == 3) { // Multiplication
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            result = num1*num2;
            cout << "Result: " << num1 << "*" << num2 << " = " << result << endl;
        }

        else if (choice == 4) {// Division
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            // check if the divisor is 0.
            if (num2 == 0) {
                cout << "Error: Division by zero not allowed!" << endl;
                cout << "Enter a non-zero number for the second number: "; 
                cin >> num2;
            }
            result = num1/num2;
            cout << "Result: " << num1 << "/" << num2 << " = " << result << endl;
        
        }
        
        else if (choice == 5) {// Square Root
            cout << "Enter a number: ";
            cin >> num1;
            // check if the number entered is negative
            if (num1 < 0) {
                cout << "Error: cannot take the square root of a negative number!" << endl;
                cout << "Enter a number greater than zero: ";
                cin >> num1;
            }
            result = sqrt(num1); // using the square root function from the cmath library
            cout << "Result: the square root of " << num1 << " is " << result << endl;
        }

        else if (choice == 6) {// Exponentiation
            cout << "Enter base number: ";
            cin >> num1;
            // check if the base number entered is an odd negative number
            // The pow function cannot raise an arbitrary negative number to a power
            /* if (num1 < 0){
                cout << "Error: cannot raise odd negative numbers to a power." << endl;
                cout << "Enter an even negative number or an arbitrary positive real number: ";
                cin >> num1;
            } */
            cout << "Enter the second number, i.e., the exponent: ";
            cin >> num2;



            // treat separate cases

            // num1 >= 0 is true there is no problem

            if (num1 >=0 ) {

                cout << "All okay here!" << endl;
            }

            else {
                cout << "Since the base number you entered is negative, further tests " 
                     << "are required before determining the result." << endl;
            }
            
            result = pow(num1,num2);
            cout << "Result: the value of " << num1 << " raised to the power of " 
                << num2 << " , i.e., pow" <<"(" << num1 << "," << num2 << ") is " 
                << result << endl;
            
        }

        else if (choice == 7) { // Exit Program
            exitProgram = true;
            cout << "Thank you for using the Interactive Calculator. Goodbye!" << endl;
        }

        else {
            cout << "Please implement other operations or handle invalid input." << endl;
        }
    }
    return 0;

}