#include <iostream>

using namespace std;

int main() {
    // Player statistics
    int baseScore = 73;
    int bonusPoints = 12;
    int timeBonus = 7;

    // Basic calculations
    int totalScore = baseScore + bonusPoints + timeBonus;
    cout << "Total Score: " << totalScore << endl;

    // Division and modulus examples
    double averageScore = totalScore / 3.0; // double precision division
    int remainder = totalScore % 3; // Remainder when divided by 4    
    cout << "Average per section: " << averageScore << endl;
    cout << "Score remainder: " << remainder << endl;

    // Score Multiplier

    double scoreMultiplier; // multiply total score by a number
    cout << "Enter the score mulitplier: ";
    cin >> scoreMultiplier;
    double multipleOfTotalScore = totalScore*scoreMultiplier; // double precision 
    // multiplication
    cout << scoreMultiplier << " times the totalScore is: " << multipleOfTotalScore << endl;

    //Applying BODMAS rules
    double number1 = 3.2 + 5.1*(2.4 - 1.3)/0.04 - 17%5;
    double number2 = 3.2 + 5.1*2.4 - 1.3/0.04 - 17%5;
    cout << "The result of applying the BODMAS rules to 3.2 + 5.1*(2.4 - 1.3)/0.04 - 17%5 is: " 
         << number1 << endl;
    cout << "The result of applying the BODMAS rules to 3.2 + 5.1*2.4 - 1.3/0.04 - 17%5 is: " 
         << number2 << endl;

    return 0;
}