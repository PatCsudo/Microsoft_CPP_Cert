#include <iostream>
#include <iomanip>  // For formatting output

using namespace std;

// Constants for conversion formulas
const double FREEZING_POINT_C = 0.0; // Freezing point of water in Celsius
const double FREEZING_POINT_F = 32.0; // Freezing point of water in Fahrenheit
const double ABSOLUTE_ZERO_C = -273.15; // Absolute zero in Celsius
const double F_TO_C_FACTOR = 5.0/9.0; // Mulitiplicative factor to convert F to C
const double C_TO_F_FACTOR = 9.0/5.0; // Mulitplicative factor to convert C to F
    

// celsiusToFahrenheit = C_TO_F_FACTOR*celsius + FREEZING_POINT_F ; the C_TO_F_FACTOR changes the numerical range
// because fahrenheit uses a different scale. 
// FREEZEING_POINT_F is the freezing point of water on the fahrenheit scale
// fahrenheitToCelsius = F_TO_C_FACTOR*(fahrenheit-FREEZING_POINT_F)

// celsiusToKelvin = celsius + 273.15 // add to 273.15 to the celsius temperature to 
// convert from the celsius scale to the Kelvin scale

//kelvinToCelsius = kelvin + ABSOLUTE_ZERO 
// add the numeric value of absolute zero (on the celsius scale) to the 
// kelvin scale to convert from the kelvin scale to the celsius scale

// Function prototypes

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToKelvin(double celsius);
double kelvinToCelsius(double kelvin);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToFahrenheit(double kelvin);
    
int main() {
    // Display program header
    cout << "=======================================" << endl;
    cout << "       TEMPERATURE CONVERTER           " << endl;
    cout << "=======================================" << endl;
    cout << "This program converts temperatures between" << endl;
    cout << "Celsius, Fahrenheit, and Kelvin." << endl << endl;
    
    // Main program code will go here

    bool keepRunning = true;

    while (keepRunning) {

        // Display the menu options
        cout << "\nTemperature Conversion Options:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit Program" << endl;
        cout << "\nEnter your choice (1-7): " << endl;

        // Get the user's menu choice
        int choice;
        cin >> choice; // cin is a stream operator to enter input to the program.
    
        // Variable for tempurature input and result
        double inputTemp, result;

        // Process the user's choice
        // A switch statement allows the user to select one of many code blocks
        switch (choice) {
            case 1:

        }
    
    }
    
    return 0;
}

// Convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return C_TO_F_FACTOR*celsius + FREEZING_POINT_F; 
}

// Convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return F_TO_C_FACTOR*(fahrenheit - FREEZING_POINT_F);
}

// Convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    if (celsius < ABSOLUTE_ZERO_C) {
        cout << "ERROR! Entered temperature is less than absolute zero!" << endl;
        return -999.0;
    }
    return celsius - ABSOLUTE_ZERO_C;

}

// Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin + ABSOLUTE_ZERO_C;
}

// Convert Fahrenheit to Kelvin
double fahreheitToKelvin(double fahrenheit) {
    // Fist convert to Celsius and then convert to Kelvin
    if (fahrenheit < 32.0 && fahrenheit > 212.0) {
        cout << "Error: Fahrenheit temperature outside of range!" << endl;
        return -999.0;
    }
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius); 
}

// Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    // First convert Kelvins to Celsius, then convert Celsius to Fahrenheit
    if (kelvin < 0) {
        cout << "Error! Kelvin temperature cannot be negative!" << endl;
        return 999.0
    }
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}