/* Lab 4: Multi-compenent Lab. 
Date: 21st April 2026
Microsoft Professional C++ Certificate */

/* Programming Fundamentals, Lab 4*/

/* Include the necessary header files for preprocessing */
#include <iostream> // for input/output operations 
#include <iomanip> // For output formatting
#include <string> // For string data type
#include <random> // Header file for random numbers
#include <ctime> // Header file for working with dates and times
#include <cmath> // Header file for mathematical operations
#include <complex> // Header file for working with complex numbers

// Using the standard namespace
using namespace std;

// name space for complex numbers
using namespace std::complex_literals;

int main(){
    // Program title and introduction
    cout << "================================================" << endl;
    cout << "             MULTI-COMPONENT PROGRAM            " << endl;
    cout << "================================================" << endl;
    cout << "This program demonstrates using multiple headers" << endl;
    cout << "and formatting techniques in C++." << endl << endl;

    // Component 1: Basic information
    cout << "---------------- COMPONENT 1: BASIC INFO ---------------" << endl;


    // Create the variables to store the information
    /*
    A string is a sequence of characters
    A variable is a storage location that holds a value.
    */

    string name = "C++ Programming"; // variable: name
    string version = "C++17"; // variable: version
    string creator = "Bjarne Stroustrop"; //variable: creator
    int yearCreated = 1985; //variable: yearCreeated
    string fact1 = "C++ is a compiled language"; // It's true
    bool fact2 = true; 
    int fact3 = 0;

    // Display the information
    cout << "Language: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year Created: " << yearCreated << endl << endl; 

    // Display additional facts
    cout << "Compiled Language: " << fact1 << endl;
    cout << "C++ is used in control systems: " << (fact2 ? "Yes":"No") << endl;
    cout << "The value " << fact3 << " is returned upon successful program \
exit." << endl;

    // Component 2: Formatted numeric output
    cout << "---------- COMPONENT 2: FORMATTED NUMBERS ---------" << endl;

    // Creat numeric veriables
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double goldenRatio = 1.61803398874989484820;

    // Display with different precision
    cout << "Default display:" << endl;
    cout << "Pi = " << pi << endl;
    cout << "e = " << e << endl;
    cout << "Golden Ratio = " << goldenRatio << endl;

    cout << "With 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "Pi = " << pi << endl; // 3.14
    cout << "e = "  << e << endl; // 2.72
    cout << "Golden Ratio = " << goldenRatio << endl << endl; // 1.62
    
    cout << "With 6 decimal places:" << endl;
    cout << fixed << setprecision(6);
    cout << "Pi = " << pi << endl; // 3.141593
    cout << "e = "  << e << endl; // 2.718282
    cout << "Golden Ratio = " << goldenRatio << endl << endl; // 1.618034
    
    // Rest formatting
    cout.unsetf(ios::fixed);
    cout << setprecision(6);

    // Component 3: Table display
    cout << "------------- COMPONENT 3: TABLE DATA -----------" << endl;


    // Set up table header
    // setw sets the field width for the nect output
    cout << left << setw(15) << "Data Type" << setw(20) << "Size (bytes)" << \
setw(20) << "Value Range" << endl;
    cout << string(55,'-') << endl;

    // Table Rows
    cout << left << setw(15) << "int" << right << setw(20) << sizeof(int) << left << setw(22) << " -2^31 to 2^31-1" << endl;
    cout << left << setw(15) << "double" << right << setw(20) << sizeof(double) << left << setw(22) << " ±1.7e^308" << endl;
    cout << left << setw(15) << "char" << right << setw(20) << sizeof(char) << left << setw(22) << " -128 to 127" << endl;
    cout << left << setw(15) << "bool" << right << setw(20) << sizeof(bool) << left << setw(22) << " true or false" << endl;
    cout << left << setw(15) << "float" << right << setw(20) << sizeof(float) << left << setw(22) << " 1.2e^-38 to 3.4e^38" << endl;
    cout << left << setw(15) << "wchar_t" << right << setw(20) << sizeof(wchar_t) << left << setw(22) << " 0 to 65,535" << endl;

    // Component 4: Custom mathematical component
    cout << "\n-------- COMPONENT 4: MATHEMATICAL FUNCTIONS -------" << endl;
    cout << "The value of cos(0) is: " << cos(0) << endl;// cosine function evaluated at 0.
    cout << "The value of sin(Pi/2) is: " << sin(pi/2.) << endl; //sine function having argument pi/2
    cout << "The area of a circle having radius 2 is: " << pi*pow(2,2) << endl; //power function
    cout << "The square of i, the unit imaginary number is: " << pow(1i,2) << endl;


    // Component 5: Custom component - Program information
    cout << "\n------------- COMPONENT 5: PROGRAM INFO ------------" << endl;
    
    // Get current date/time info (simulated)
    string currentDate = "2026-04-22";
    string userName = "C++ Learner";
    int linesOfCode = 75;

    // Format and display program information
    cout << "Program: Multi-Component Example" << endl;
    cout << "Author: " << userName << endl;
    cout << "Date: " << currentDate << endl;
    cout << "Code Statistics:" << endl;
    cout << " - Lines of code: " << linesOfCode << endl;
    cout << " - Header files: 7" << endl;
    cout << " - Components: 5" << endl;

    // Display a progress bar (simulated)
    cout << "Completion: [";
    int progress = 80; //80% complete
    // A loop allows something to happen over and over again
    for (int i = 0; i < 20; i++){
        if (i < progress/5) cout << "=";
        else cout << " ";
    }

    cout << "] " << progress << "%" << endl;

    //Program end
    cout << "\nProgram execution completed" << endl;
    return 0;






}

