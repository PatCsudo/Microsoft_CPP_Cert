#include <iostream>
int main() {
    
    // Integer division example

    int totalPoints = 76;
    int numTests = 3;
    double average1 = totalPoints/numTests; 
    /* 25.33337 --> 25 average1 = 25 is stored 
    as a double, even though its int. */

    std::cout << "Average (implicit type): " << average1
              << std::endl;
    
    // Character to integer conversion
    char grade = 'E';
    int gradeValue = grade; // ASCII conversion
    std::cout << "ASCII value of 'E': " << gradeValue 
              << std::endl;

    
    return 0;

}