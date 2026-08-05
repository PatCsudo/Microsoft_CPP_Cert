#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double performOperation(double a, char op, double b) {
    switch (op) {
    case '+': return a + b; // Addition
    case '-': return a - b; // Subtraction
    case '*': return a * b; // Multiplication
    case '/': // Division
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    case '%': // Modulus (remainder)
        if (b != 0) {
            return static_cast<int>(a) % static_cast<int>(b);
        } else {
        cout << "Error: Division by zero!" << endl;
            return 0;
        }
    case '^': return pow(a,b); // Exponentiation (raise a to the power of b)  
    default:
        cout << "Error: Unknown operator!" << endl;
        return 0;
    }
}

// Function to perform relational operations
bool performComparison(double a, string op, double b) {
    if (op == "==") return a == b; // Equal to
    if (op == "!=") return a != b; // Not equal to
    if (op == "<") return a < b; // Less than
    if (op == ">") return a > b; // Greater than
    if (op == "<=") return a <= b; // Less than or equal to
    if (op == ">=") return a >= b; // Greater than or equal to    
    cout << "Error: Unknown comparison operator!" << endl;
    return false;
}

// Function to perform logical operations
bool performLogical(bool a, string op, bool b) {
    if (op == "&&") return a && b; // Logical AND
    if (op == "||") return a || b; // Logical OR   
    cout << "Error: Unknown logical operator!" << endl;
    return false;
}

// Function to perform logical NOT operation
bool performLogicalNot(bool a) {
    return !a; // Logical NOT
}

// Add a function to demonstrate logical operator precedence
void demonstrateLogicalPrecedence() {
    // Your code here to show how logical operators are evaluated based on precedence
    bool result1 = true || false && true && !false;
    bool result2 = true || false && true && !true;
    bool result3 = false || false && true && !true;
    bool result4 = true || false || true && !true;
    bool result5 = true && false || true && !true;
    bool result6 = false && false || false || !false;
    bool result7 = true || true && false;
    bool result8 = true || (true && false);
    bool result9 = !false && true || false;
    bool result10 = ((!false) && true) || false;

    cout << "\nResult for true || false && true && !false : " << result1; // true (1)
    cout << "\nResult for true || false && true && !true : " << result2; // true (1)
    cout << "\nResult for false || false && true && !true : " << result3; // false (0)
    cout << "\nResult for true || false || true && !true : " << result4; // true (1)
    cout << "\nResult for true && false || true && !true : " << result5; // false (0)
    cout << "\nResult for false && false || false || !false : " << result6; // true (1)
    cout << "\nResult for true || true && false : " << result7; // true (1)
    cout << "\nResult for !false && true || false : " << result9; // true (1)
    if (result7 == result8){
        cout << "\ntrue || true && false = true || (true && false)";
    }
    /* else {
        cout << "\ntrue || true && false != true || (true && false)" << endl;
    } */
    if (result9 == result10){
        cout << "\n!false && true || false = ((!false) && true) || false";
    }
    
}

int main() {

    // Display welcome message

    cout << "=======================================" << endl;
    cout << "   MATHEMATICAL EXPRESSION EVALUATOR   " << endl;
    cout << "=======================================" << endl;
    cout << "This program evaluates mathematical expressions" << endl;
    cout << "using various operators and precedence rules." << endl << endl;

    // Main program code will go here  

    bool continueEvaluations = true;
    while (continueEvaluations) {

        cout << "\nSelect operation type:" << endl;
        cout << "1. Arithmetic (number operator number)" << endl;
        cout << "2. Comparison (number operator number)" << endl;
        cout << "3. Logical (true/false operator true/false)" << endl;
        cout << "Enter choice (1, 2, or 3): ";

        int operationType;
        cin >> operationType;
        char choice;

        if (operationType == 1) {
            double num1, num2;
            char op;
            cout << "\nEnter a simple expression (number operator number): ";
            cin >> num1 >> op >> num2;
            double result = performOperation(num1, op, num2);
            cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        }
        else if (operationType == 2) {
            // New comparison code
            double num1, num2;
            string op;
            cout << "\nEnter a comparison expression (number operator number)" << endl;
            cout << "Available operators: ==, !=, <, >, <=, >=" << endl;
            cout << "Expression: ";
            cin >> num1 >> op >> num2;
            bool result = performComparison(num1, op, num2);
            cout << "Result: " << num1 << " " << op << " " << num2 << " = " 
                 << (result ? "true" : "false") << endl;
        }

        else if (operationType == 3) {
            cout << "\nSelect logical operation:" << endl;
            cout << "1. AND/OR (value operator value)" << endl;
            cout << "2. NOT (not value)" << endl;
            cout << "Enter choice (1 or 2): ";

            int logicChoice;
            cin >> logicChoice;

            if (logicChoice == 1) {
                bool val1, val2;
                string op;
                cout << "\nEnter values as 1 (true) or 0 (false)" << endl;
                cout << "Expression (value operator value): ";
                cin >> val1 >> op >> val2;
                bool result = performLogical(val1, op, val2);
                cout << "Result: " << (val1 ? "true" : "false") << " " << op << " "
                     << (val2 ? "true" : "false") << " = " << (result ? "true" : "false") 
                     << endl;
            }
            else if (logicChoice == 2) {
                bool val;
                cout << "\nEnter value as 1 (true) or 0 (false): ";
                cin >> val;
                bool result = performLogicalNot(val);
                cout << "Result: !" << (val ? "true" : "false") << " = " 
                     << (result ? "true" : "false") << endl;
            }
            else {
                cout << "Invalid choice!" << endl;
            }
        }

        else {
            cout << "Invalid choice!" << endl;
        }

        demonstrateLogicalPrecedence();


        cout << "\nContinue with another calculation/comparison? (y/n): ";
        cin >> choice;
        continueEvaluations = (choice == 'y' || choice == 'Y');
    }

    return 0;

}