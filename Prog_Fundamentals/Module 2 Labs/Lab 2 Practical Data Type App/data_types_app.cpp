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

    int averageAge = static_cast<int>(totalAges/3.);

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
    std::cout << "\nPrice memory storage comparison:" << std::endl;
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

    // Show memory usage
    std::cout << "\nCharacter data memory usage:" << std::endl;
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


    // ------ BOOLEAN DATA SECTION -------
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;


    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    } 
    
    
    // ------ SIMPLE PRODUCT EXAMPLE ------ 
    std::cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;
    
    // Product information using different data types
    int productId = 12345;
    double productPrice = 29.99;
    char productGrade = 'B';
    bool inStock = true;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Price: $" << productPrice << std::endl;
    std::cout << "Quality Grade: " << productGrade << std::endl;
    std::cout << "In Stock: " << inStock << std::endl;

    // Simple calculations
    double salesTax = productPrice*0.08; // 8% tax
    double totalPriceIncTax = productPrice + salesTax;

    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTax << std::endl;
    std::cout << "Total with tax: $" << totalPriceIncTax << std::endl;
    
    // Memory usage summary for simple product example
    int totalMemory = sizeof(productId) + sizeof(productPrice) + sizeof(productGrade)\
                        + sizeof(inStock);
    std::cout << "\nTotal memory used for this product: " << totalMemory << " bytes."\
    << std::endl;
    

    // Product information for a second product
    int productId2 = 234567;
    double productPrice2 = 679.99;
    char productGrade2 = 'C';
    bool inStock2 = false;

    std::cout << "\n Product information for a second product:" << std::endl;
    std::cout << "Product ID: " << productId2 << std::endl;
    std::cout << "Price: $" << productPrice2 << std::endl;
    std::cout << "Quality Grade: " << productGrade2 << std::endl;
    std::cout << "In Stock: " << inStock2 << std::endl;

    double salesTax2 = productPrice2*0.08; // 8% tax
    double totalPriceIncTax2 = productPrice2 + salesTax2;

    std::cout << "\nPrice calculations for the second product:" << std::endl;
    std::cout << "Sales tax: $" << salesTax2 << std::endl;
    std::cout << "Total price (including tax): $" << totalPriceIncTax2 << std::endl;

    // Compare the price of product one and product two
    if (totalPriceIncTax > totalPriceIncTax2) {
        std::cout << "Product one costs more than the second product." << std::endl;
    } else if (totalPriceIncTax == totalPriceIncTax2){
        std::cout << "Product one and product two cost the same." << std::endl;
    } else {
        std::cout << "Product two costs more than product one." << std::endl;
    }

    int totalMemory2 = sizeof(productId2) + sizeof(productPrice2) + sizeof(productGrade2)\
                        + sizeof(inStock2);
    std::cout << "\nTotal memory used for this product: " << totalMemory2 << " bytes."\
    << std::endl;

    if (totalMemory > totalMemory2){
        std::cout << "The total memory used for product one is more than that used for\
 product 2." << std::endl;
    } else if (totalMemory == totalMemory2) {
        std::cout << "Product one and product two use the same amount of memory."\
        << std::endl;
    } else {
        std::cout << "The total memory used for product two is more than that used for\
 product one." << std::endl;
    }
    
    // ------ OPTIONAL TASK #3: CHARACTER EXPLORATION ------
    std::cout << "\n ------ OPTIONAL TASK ------" << std::endl;
    std::cout << "\nOptional Task 3: Try storing and displaying numbers in char variables:" << std::endl;
    
    char number5 = 5;
    char number12 = 12;

    std::cout << "The number5 variable is of type char and is set equal to 5." << std::endl;
    std::cout << "The variable `number5' displays as: " << number5 << std::endl;
    std::cout << "The number12 variable is of type char and is set equal to 12." << std::endl;
    std::cout << "The variable `number12' displays as: " << number12 << std::endl;
    
    std::cout << "\nClearly, the variables number5 and number12 don't display." << std::endl;
    std::cout << "Let's try another way of storing numbers as variables of type char." << std::endl;

    char number_7 = '7';
    //char number16 = '16';
    //char number_12 = '12';

    std::cout << "\nThe number7 variable is of type char and is set equal to '7'." << std::endl;
    std::cout << "The variable `number7' displays as: " << number_7 << std::endl;
    std::cout << "The number16 variable is of type char and is set equal to '16'." << std::endl;
    // std::cout << "The variable `number16' displays as: " << number16 << std::endl;
    std::cout << "Trying to display the variable `number16' throws the following warning\n\
and error: " << std::endl;
    std::cout << "multi-character constant ... overflow in conversion from 'int' to 'char'\n\
changes from '12598' to ' '6''." << std::endl;
    std::cout << "Similar issues arise when setting other variables of char type to double \n\
digits." << std::endl;
    
    return 0;
}