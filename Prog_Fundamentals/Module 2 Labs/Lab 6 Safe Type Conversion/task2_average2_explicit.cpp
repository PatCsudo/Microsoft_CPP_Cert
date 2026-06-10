#include <iostream>
int main() {
    
    // Integer division example

    int totalPoints = 95;
    int numTests = 3;

    // explicit type conversion using static casting
    double average2_trial1 = static_cast<double>(totalPoints)/numTests; 
    /* 31.66667 is stored as a double */
    double average2_trial2 = totalPoints/static_cast<double>(numTests);

    std::cout << "Average trial 1 (explicit - numerator): " 
              << average2_trial1
              << std::endl;
    
    std::cout << "Average trial 2 (explicit - denominator): " 
              << average2_trial2
              << std::endl;
    
    // Demonstrate precision loss when converting back
    double preciseValue = 7.89;
    int truncatedValue = static_cast<int>(preciseValue);
    std::cout << "Original value: " << preciseValue
              << std::endl;
    std::cout << "Truncated value: " << truncatedValue
              << std::endl;
    
    return 0;

}