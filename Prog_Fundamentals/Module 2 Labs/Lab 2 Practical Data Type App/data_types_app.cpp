#include <iostream>
#include <climits>  // For data type limits like INT_MAX

int main() {
    // Display program header
    std::cout << "=======================================" << std::endl;
    std::cout << "   PRACTICAL DATA TYPE APPLICATION     " << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "This program demonstrates appropriate usage of different data types" << std::endl;
    std::cout << "for various kinds of information." << std::endl << std::endl;
    
    // Program sections will go here
    
    // ------ AGE DATA SECTION: Storing and Displaying Age Data ------
    std::cout << "\n------ AGE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for age information:" << std::endl;

    // Integer type for ages (no fractional years needed)
    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;
    
    // Display age information
    std::cout << "Child age: " << childAge << " years" << std::endl;
    std::cout << "Teen age: " << teenAge << " years" << std::endl;
    std::cout << "Adult age: " << adultAge << " years" << std::endl;
    
    // Show memory usage
    std::cout << "\nAge data memory usage:" << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << " bytes" << std::endl;

    // Demonstrate age calculations
    std::cout << "\nAge calculations:" << std::endl;
    int totalAges = childAge + teenAge + adultAge;
    std::cout << "Total of all ages: " << totalAges << " years" << std::endl; 

    double averageAge = totalAges/3.;

    std::cout << "The average of the three ages is: " << averageAge << " years" << std::endl;

    int ageDiffMax = adultAge - childAge;

    std::cout << "The age difference between the oldest and youngest is: "\
    << ageDiffMax << std::endl;

    int birthYear = 1982;
    int currentYear = 2026;

    int myAge = currentYear - birthYear;

    std::cout << "I am " << myAge << " years old." << std::endl;


    // ------ PRICE DATA SECTION ------
    std::cout << "\n------ PRICE DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for price information:" << std::endl;
 
    // Use double for prices (needs decimal precision)
    double coffeePrice = 3.99;
    double laptopPrice  = 1299.99;
    double housePrice = 350000.00;

    // Display price information
    std::cout << "Coffee price: $" << coffeePrice << std::endl;
    std::cout << "Laptop price: $" << laptopPrice << std::endl;
    std::cout << "House price: $" << housePrice << std::endl;

    // Show memory usage comparison
    float priceAsFloat = 19.99f;
    double priceAsDouble = 19.99;
    std::cout << "\nPrice memorary storage comparison:" << std::endl;
    std::cout << "Price as float: $" << priceAsFloat << " (uses " << sizeof(float) 
    << " bytes)" << std::endl;
    std::cout << "Price as double: $" << priceAsDouble << " (uses " << sizeof(double) \
    << " bytes )" << std::endl;

    // Simple price calculations
    double totalPrice = coffeePrice + laptopPrice;
    std::cout << "\nPrice calculations:" << std::endl;
    std::cout << "Coffe + Laptop total: $" << totalPrice << std::endl;

    // -------- CHARACTER DATA SECTION ---------
    std::cout << "\n------ CHARACTER DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for character information:" << std::endl;

    // Character variables for single characters
    char grade = 'A';
    char symbol = '#';
    char initial = 'J';

    // Display character information
    std::cout << "Student grade: " << grade << std::endl;
    std::cout << "Special symbol: " << symbol << std::endl;
    std::cout << "First initial: " << initial << std::endl;
    
    // Show how the characters relate to numbers (ASCII values)
    std::cout << "\nCharacter to number conversion:" << std::endl;
    std::cout << "Grade '" << grade << "' has ASCII value: " << (int)grade << std::endl;
    std::cout << "Symbol '" << symbol << "' has ASCII value: " << (int)symbol << std::endl;

    // Show memorary usage
    std::cout << "\nCharacter data memorary usage:" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes." << std::endl;
    
    // Character practice
    std::cout << "\nSome practice with characters" << std::endl;
    
    // Store your initials in char variables
    char myFirstInitial = 'P';
    char mySecondInitial = 'C';

    // Display them and their ASCII values
    std::cout << "My first initial, '" << myFirstInitial << "', has ASCII value: "\
    << (int)myFirstInitial << std::endl;
    std::cout << "My second initial, '" << mySecondInitial << "', has ASCII value: "\
    << (int)mySecondInitial << std::endl;

    // Show your favorite letter

    char myFavouriteLetter = 'G';
    std::cout << "My favourite letter, '" << myFavouriteLetter << "', has ASCII value: "\
    << (int)myFavouriteLetter << std::endl;


    return 0;
}