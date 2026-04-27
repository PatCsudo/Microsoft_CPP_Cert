#include<iostream> // Preprocessor directive


using namespace std; //Drops the need to used the prefix std::

/* A class to find the sum of two variables. 
The PascalCase naming convention is used. */
class SumOfTwoNumbers{ 

    public:
        // initializes the two variables to be added
        int firstNumber, secondNumber;

        // The function to do adding
        void AddTwoNumbers(){
            firstNumber = 10;
            secondNumber = 20; 

            int sumNumbers = firstNumber + secondNumber; 

            cout << "The sum of the two numbers is " << sumNumbers << endl;

            // An if statement commenting on the magnitude of the result
            if (sumNumbers > 25){
                cout << "The sum of the two numbers is greater than \
twenty-five." << endl;
            } else {
                cout << "The sum of the two numbers is less than \
twenty-five" << endl;
            }   
        }

};


int main(){

    SumOfTwoNumbers sum_of_two_numbers; // the variable sum_of_two_numbers.
    
    sum_of_two_numbers.AddTwoNumbers(); /* Calculates the sum and prints the
    result to the console along with a comment on its magnitude relative to 
    the number 25 */
    return 0;
}