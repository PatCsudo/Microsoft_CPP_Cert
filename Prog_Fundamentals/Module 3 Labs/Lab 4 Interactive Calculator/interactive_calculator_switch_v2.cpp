#include <iostream>
#include <cmath> // for mathematical functions
#include <limits>

using namespace std;

// Function to get a valid double input from the user

double getValidDoubleInput(const string& prompt) {
    double value;
    bool validInput = false;

    do {
        cout << prompt;
        if (cin >> value) {
            validInput = true;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input: Enter a number." << endl;
        }

    } while(!validInput);

    return value;
}

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
        // cin >> choice;
        if (!(cin >> choice)) {
            // if input is not a number, clear the error state and discard the input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number between 1 and 9." << endl;
            continue; // Skip the rest of the loop and start over.
        }

        /*while ((choice < 1) || (choice > 9)) {

            cout << "Error! Invalid entry: choose a number between 1 and 9: ";
            cin >> choice;
        }*/

        

        // Process the choice using conditional statements

        // variables to store the operands
        double num1, num2, result;

        // Process the user's choice using if-else statements
        switch(choice) {

            case 1: // Addition
                /* cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                */
                num1 = getValidDoubleInput("Enter first number: ");
                num2 = getValidDoubleInput("Enter a second number: ");
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            

            case 2: // Subtraction
                num1 = getValidDoubleInput("Enter the first number: ");
                num2 = getValidDoubleInput("Enter the second number: ");
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << "(" << num2 << ")" << " = " << result << endl;
                break;
            

            case 3:  // Multiplication
                num1 = getValidDoubleInput("Enter the first number: ");
                num2 = getValidDoubleInput("Enter the second number: ");
                result = num1*num2;
                cout << "Result: " << num1 << "*" << num2 << " = " << result << endl;
                break;
            

            case 4: // Division
                num1 = getValidDoubleInput("Enter the first number: ");
                num2 = getValidDoubleInput("Enter the second number: ");
                // check if the divisor is 0.
                if (num2 == 0) {
                    cout << "Error: Division by zero not allowed!" << endl;
                    cout << "Enter a non-zero number for the second number: "; 
                    cin >> num2;
                }
                result = num1/num2;
                cout << "Result: " << num1 << "/" << num2 << " = " << result << endl;
                break;
            
        
            case 5: // Square Root
                num1 = getValidDoubleInput("Enter a number: ");
                // check if the number entered is negative
                if (num1 < 0) {
                    cout << "Error: cannot take the square root of a negative number!" << endl;
                    num1 = getValidDoubleInput("Enter a number greater than zero: ");
                }
                result = sqrt(num1); // using the square root function from the cmath library
                cout << "Result: the square root of " << num1 << " is " << result << endl;
                break;
            

            case 6: // Exponentiation
                num1 = getValidDoubleInput("Enter the base number: ");
                num2 = getValidDoubleInput("Enter the exponent number: ");

                // treat separate cases

                // num1 >= 0 is true there is no problem

                if (num1 >=0 ) {
                    result = pow(num1, num2);
                }

                /* A negative number can be raised to a power and give
                    a real number as the result in different cases. These are
                    
                    1. If the number is raised to an even integral power.
                    2. If the number is odd and it is raised to an even
                    or odd integral power.

                    Apart from these cases one will be exponeniation a
                    negative number to a power with a non-zero decimal
                    part. This results in a complex number, which the 
                    pow function in cmath is not equipped to deal with.
                    
                    The trouble with coding cases 1 and 2 is that num1 and num2
                    are of type double, whereas the powers will be integers.
                    
                    In cases 1 and 2 we need to focus on the exponent.

                    This problem mentioned above might be circumvented by testing
                    if the integer part of num2 is equal to num2. */ 
                    
                    /* If the decimal part of num2 is zero then pow(num1, num2)
                    where num1 < 0 will give a meaningful result. */

                int intPartOfnum2;
                intPartOfnum2 = static_cast<int>(num2);
                double decimalPartOfnum2;
                decimalPartOfnum2 = num2 - intPartOfnum2;

                if ( (num1 < 0) && ((decimalPartOfnum2 == 0)) ) {
                    result = pow(num1,num2);
                }

                if ( (num1 >= 0) || ((num1 < 0) && (decimalPartOfnum2 == 0)) ) {

                    cout << "\nResult: the value of " << num1 << " raised to the power of " 
                    << num2 << " , i.e., pow" <<"(" << num1 << "," << num2 << ") is " 
                    << result << endl;
                }

                else {
                        cout << "\nA real number cannot be obtained for" << endl;
                        cout << "pow(num1, num2) because the valued entered for" << endl;
                        cout << "num1 is negative and the decimal part of the value" << endl;
                        cout << "entered for num2 is non-zero." << endl;
                        num2 = getValidDoubleInput("Enter an exponent, which is an integer: ");
                        result = pow(num1, num2);
                        cout << "\nResult: the value of " << num1 << " raised to the power of " 
                        << num2 << " , i.e., pow" <<"(" << num1 << "," << num2 << ") is " 
                        << result << endl;

                    }
                break;
            

            case 7: // Exit Program
                exitProgram = true;
                cout << "Thank you for using the Interactive Calculator. Goodbye!" << endl;
                break;
            
            // Is the default required given the if statement that catches invalid entries?
            default: 
                cout << "Please implement other operations or handle invalid input." << endl;
                break;
     
        }    
    }

    return 0;

}