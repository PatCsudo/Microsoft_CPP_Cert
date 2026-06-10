#include <iostream>
using namespace std;
int main() {
    // Problem 1: Lost precision in financial calculation
    double dollars = 983;
    float interestRate = 0.05; // 5%
    // int interest = dollars * interestRate; // Issue here!
    // Output: $49 if interest is declared as an int
    
    /* The commented out definition is problematic because
    storing interest as an int results in the loss of decimal
    precision. The compiler implictly truncates dollars*interestRate
    to its integer part. 

    The decimal precision can be restored by declaring interest
    to be of type float or double. Declaring it to be of type
    double is to be preferred because the calculation is 
    financial in nature. Initially, I cast the dollars valriable
    and the interestRate variable to double for reasons of 
    safety in regard to preventing precision loss.
    
    Another thing one could do to make the program more robust
    is to simply declare dollars as a double in order to allow
    the interest to be calculated on any dollar amount. */

    double interest = dollars*static_cast<double>(interestRate);
    cout << "Interest earned: $" << interest << endl;
    // Problem 2: Unexpected truncation  
    double price = 19.99;
    /* int wholeDollars = static_cast<int>(price); // Issue here!    */
    // storing wholeDollars = price as an int results in unexpected truncation
    // 99.99 --> 99
    // The same thing happens above when storing interest as an int.
    // Writing int wholeDollars = static_cast<int>(price) explicitly tells the programmer
    // and any future users that a truncation will occur.

    int wholeDollars = static_cast<int>(price); // Issue resolved!    
    cout << "Price in whole dollars: $" << wholeDollars << endl;
    double lostCents = price - wholeDollars;
    cout << "Lost cents due to conversion: $" << lostCents << endl;

    return 0;
}