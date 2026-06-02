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
void displayTemperatureFacts(double celsius);
    
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
            case 1: // Celsius to Fahrenheit
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                while (inputTemp < ABSOLUTE_ZERO_C) {
                    cout << "The celsius temperature cannot be below -273.15 °C!" << endl;
                    cout << "Try Again!" << endl;
                    cout << "Enter temperature in Celsius: ";
                    cin >> inputTemp;
                }
                result = celsiusToFahrenheit(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °C = " << result << " °F" << endl;
                displayTemperatureFacts(inputTemp); // display interesting facts about input celsius Temp
                break;
            
            case 2: // Fahrenheit to Celsius
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                result = fahrenheitToCelsius(inputTemp);
                while (result < ABSOLUTE_ZERO_C) {
                    cout << "The celsius temperature cannot be below -273.15 °C!" << endl;
                    cout << "Try Again!" << endl;
                    cout << "Enter temperature in Fahrenheit: ";
                    cin >> inputTemp;
                    result = fahrenheitToCelsius(inputTemp);
                }
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " °C" << endl;
                displayTemperatureFacts(result); // result is in celsius - display interesting facts about it
                break;
            
            case 3: // Celsius to Kelvins
                cout << "Enter temperature in Celsius: ";
                cin >> inputTemp;
                while (inputTemp < ABSOLUTE_ZERO_C) {
                    cout << "The celsius temperature cannot be below -273.15 °C!" << endl;
                    cout << "Try Again!" << endl;
                    cout << "Enter temperature in Celsius: ";
                    cin >> inputTemp;
                }
                result = celsiusToKelvin(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " °C = " << result << " K" << endl;
                displayTemperatureFacts(inputTemp); // inputTemp is in celsius
                break;

            case 4: // Kelvins to Celsius
                cout << "Enter temperature in Kelvins: ";
                cin >> inputTemp;
                while (inputTemp < 0) {
                    cout << "The kelvin temperature cannot be negative!" << endl;
                    cout << "Try Again!" << endl;
                    cout << "Enter temperature in Kelvins: ";
                    cin >> inputTemp;
                }
                result = kelvinToCelsius(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " K = " << result << " °C" << endl;
                displayTemperatureFacts(result); // result is in celsius - display interesting facts about it
                break;

            case 5: // Fahrenheit to Kelvin
                cout << "Enter temperature in Fahrenheit: ";
                cin >> inputTemp;
                result = fahrenheitToKelvin(inputTemp);
                while (result < 0) {
                    cout << "The Kelvin temperature cannot be negative!" << endl;
                    cout << "Try Again!" << endl;
                    cout << "Enter temperature in Fahrenheit greater than the previous input : ";
                    cin >> inputTemp;
                    result = fahrenheitToKelvin(inputTemp);
                }
                cout << fixed << setprecision(2);
                cout << inputTemp << " °F = " << result << " K" << endl;
                displayTemperatureFacts(kelvinToCelsius(result)); // result is in celsius - display interesting facts about it
                break;

            case 6: // Kelvin to Fahrenheit
                cout << "Enter temperature in Kelvins: ";
                cin >> inputTemp;
                while (inputTemp < 0) {
                    cout << "The kelvin temperature cannot be negative!" << endl;
                    cout << "Try Again!" << endl;
                    cout << "Enter temperature in Kelvins: ";
                    cin >> inputTemp;
                }
                result = kelvinToFahrenheit(inputTemp);
                cout << fixed << setprecision(2);
                cout << inputTemp << " K = " << result << " °F" << endl;
                displayTemperatureFacts(fahrenheitToCelsius(result)); // result is in celsius - display interesting facts about it
                break;

            case 7: // Exit
                keepRunning = false;
                cout << "Thank you for using the Temperature Converter App!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select a number between 1 and 7." << endl;
                break;

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
        cout << "Try Again!" << endl;
    }
    return celsius - ABSOLUTE_ZERO_C;

}

// Convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin + ABSOLUTE_ZERO_C;
}

// Convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    // Fist convert to Celsius and then convert to Kelvin
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius); 
}

// Convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    // First convert Kelvins to Celsius, then convert Celsius to Fahrenheit
    if (kelvin < 0) {
        cout << "Error! Kelvin temperature cannot be negative!" << endl;
        cout << "Try Again!" << endl;
    }
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

void displayTemperatureFacts(double celsius) {
    cout << "\nInteresting facts about this temperature: " << endl;

    if (celsius < ABSOLUTE_ZERO_C) {
        cout << "This temperature is below absolute zero, which is physically impossible!" << endl;
    }

    else if (celsius == ABSOLUTE_ZERO_C) {
        cout << "This temperature is absolute zero, the lowest possible temperature!" << endl;
    }

    else if (celsius < FREEZING_POINT_C) {
        cout << "This temperature is below the freezing point of water!" << endl;
    }

    else if (celsius  == FREEZING_POINT_C) {
        cout << "This temperature is the freezing point of water!" << endl;
    }

    else if (celsius < 20.0) {
        cout << "This is a cool temperature." << endl;
    }

    else if (celsius <= 23.0) {
        cout << "This is a comfortable room temperature." << endl;
    }

    else if (celsius > 23.0 && celsius <= 30.0) {
        cout << "This is a hot room temperature." << endl;
    }

    else if (celsius >= 30.0 && celsius <= 40.0 ) {
        cout << "This is a very hot room temperature." << endl;
    }

    else if (celsius > 40.0 && celsius <100.0) {
        cout << "This is an unbearable room temperature!" << endl;
    }

    else if (celsius == 100.0) {
        cout << "This is the boiling point of water at standard!" << endl;
    }

    else {
        cout << "This is above the boiling point of water!" << endl;
    }
}
