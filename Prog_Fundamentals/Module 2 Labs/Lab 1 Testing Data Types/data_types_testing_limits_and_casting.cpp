#include <iostream>
#include <climits>
int main() {
    // Test integer limits
    std::cout << "\n---- TESTING INTEGER LIMITS AND OVERFLOW ----" << std::endl;
    std::cout << "\nInteger Limits and Overflow:" << std::endl;
    int maxValue = INT_MAX;
    std::cout << "Maximum int value: " << maxValue << std::endl;
    std::cout << "What happens when we add 1: " << maxValue + 1 << std::endl;

    // Test type casting between different types
    std::cout << "\n--- TEST TYPE CASTING BETWEEN DIFFERENT TYPES ------" << std::endl;
    std::cout << "\nType Casting Examples:" << std::endl;
    double precisePrice = 29.95;
    int roundedPrice = static_cast<int>(precisePrice);
    std::cout << "Original price (double): " << precisePrice << std::endl;
    std::cout << "After casting to int: " << roundedPrice << std::endl;
    
    std::cout << "\nMores Type Casting Examples:" << std::endl;
    double metre2Inches = 39.3700787;
    int roundedMetre2Inches = static_cast<int>(metre2Inches);
    std::cout << "Original metre to inches conversion (double): " << metre2Inches << std::endl;
    std::cout << "After casting to int: " << roundedMetre2Inches << std::endl;

    double decimalValue = 2.053;
    int integerPart = static_cast<int>(decimalValue);
    std::cout << "Original value (double): " << decimalValue << std::endl;
    std::cout << "After casting to int: " << integerPart << std::endl;

    std::cout << "\nI conclude that casting a double to int returns the integer part of the\
 double.\n" << std::endl;


    // Test character to integer conversion
    std::cout << "\n---- TESTING CHARACTER TO INTEGER CONVERSION ----" << std::endl;
    char letter = 'C';
    int letterValue = static_cast<int>(letter);
    std::cout << "\nThe character '" << letter << "' has ASCII value: " \
    << letterValue << std::endl;

    std::cout << "\n --- CHARACTER TO INTEGER CONVERSION: EXAMPLE 2 ----" << std::endl;
    char firstInitial = 'P';
    int firstInitialValue = static_cast<int>(firstInitial);
    std::cout << "\nThe character '" << firstInitial << "' has ASCII value: " \
    << firstInitialValue << std::endl;

    std::cout << "\n --- CHARACTER TO INTEGER CONVERSION: EXAMPLE 3 ----" << std::endl;
    char middleInitial = 'J';
    int middleInitialValue = static_cast<int>(middleInitial);
    std::cout << "\nThe character '" << middleInitial << "' has ASCII value: " \
    << middleInitialValue << std::endl;

    // Testing the conversion of boolean variables to integers
    std::cout << "\n --- BOOL TO INTEGER CONVERSION ----" << std::endl;
    bool green = true;
    int  greenValue = static_cast<int>(green);
    std::cout << "\nThe bool variable 'green', which is set to true, has the value "\
    << greenValue << " when cast to an integer." << std::endl;
    bool red = false;
    int  redValue = static_cast<int>(red);
    std::cout << "\nThe bool variable 'red', which is set to false has the value " \
    << redValue << " when cast to an integer." << std::endl;

    // Some casting experiments
    std::cout << "\n ----- CASTING EXPERIMENTS ---------- " << std::endl;
    std::cout << "\nA negative double is cast to an integer." << std::endl;
    double absZeroTemp = -273.15;
    int absZeroTemp_Value = static_cast<int>(absZeroTemp);
    std::cout << "\nThe value of absoulte zero temperature (a negative double) in kelvins is: " \
    << absZeroTemp << std::endl;
    std::cout << "Its value after casting it to an integer is: " << absZeroTemp_Value \
    << std::endl;
    std::cout <<"So, a negative double is rounded up to the nearest integer when cast\
 cast to integer." << std::endl;

    // Casting lowercase letters to integers
    std::cout << "We now cast lowercase letters to integers.\n" << std::endl;
    char lowercaseC = 'c';
    int lowercaseC_value = static_cast<int>(lowercaseC);
    char lowercaseP = 'p';
    int lowercaseP_value = static_cast<int>(lowercaseP);
    char lowercaseJ = 'j';
    int lowercaseJ_value = static_cast<int>(lowercaseJ);
    std::cout << "The lowercase letter '" << lowercaseC << "' has ASCII value "\
    << lowercaseC_value << std::endl;
    std::cout << "The lowercase letter '" << lowercaseP << "' has ASCII value "\
    << lowercaseP_value << std::endl;
    std::cout << "The lowercase letter '" << lowercaseJ << "' has ASCII value "\
    << lowercaseJ_value << std::endl;
    std::cout << "In all cases the difference between the integer values for the uppercase \n\
and lowercase letters is 32." << std::endl; 

    // Casting the boolean value false directly to an integer
    std::cout << "\nI now cast the boolean value false directly to an integer." << std::endl;
    std::cout << "The boolean value false has the value " << static_cast<int>(false) 
    << " when cast to an integer." << std::endl;
    std::cout << "This has been previously shown above." << std::endl;


    return 0;
}
