/* The code below is from the Module 2 section 
entitle "Type Conversion Mechanisms and Safety Strategies"
*/

#include <iostream>
#include <climits> // For INT_MAX, INT_MIN
#include <cfloat> // For FLT_MAX, DBL_MAX
#include <cmath> // math library
#include <limits>


 
void demonstrateBoundaries() {
	std::cout << "Integer boundaries:" << std::endl;
	std::cout << "INT_MAX: " << INT_MAX << std::endl;
	std::cout << "INT_MIN: " << INT_MIN << std::endl;
	std::cout << "Character boundaries:" << std::endl;
	std::cout << "CHAR_MAX: " << static_cast<int>(CHAR_MAX) << std::endl;
	std::cout << "CHAR_MIN: " << static_cast<int>(CHAR_MIN) << std::endl;
	// Testing near boundaries
	int nearMax = INT_MAX - 1; // Safe
	int atMax = INT_MAX; // At boundary int pastMax = INT_MAX + 1;
	// Dangerous - overflow!
}

bool willAdditionOverflow(int a, int b);
bool safeIntegerAddition(int a, int b, int& result);
bool willMultiplicationOverflow(int a, int b);
bool safeFloatToInt(float floatValue, int& result);


template<typename SourceType, typename DestType>
bool safeConvert(SourceType source, DestType& destination) {
	// This is a simplified template - real implementation would be more complex
	if (source > static_cast<SourceType>(std::numeric_limits<DestType>::max()) ||
	source < static_cast<SourceType>(std::numeric_limits<DestType>::min())) {
		return false; //converts max and min of destinatation type to source type
		// and checks if source value is greater or less than the determined
		// limits.
	}
	destination = static_cast<DestType>(source);
	return true;
}

void testTypeConversionEdgeCases() {
	std::cout << "Testing edge cases for type conversion:" << std::endl;
	// Test 1: Boundary values
	int result;
	std::cout << "Testing INT_MAX addition: ";
	if (!safeIntegerAddition(INT_MAX, 1, result)) {
	std::cout << "Correctly detected overflow!" << std::endl;
	}
	// Test 2: Zero values
	std::cout << "Testing zero conversions: ";
	float zeroFloat = 0.0f;
	if (safeFloatToInt(zeroFloat, result)) {
		std::cout << "Zero conversion successful: " << result << std::endl;
	}
	// Test 3: Negative values
	std::cout << "Testing negative boundary: ";
	if (!safeIntegerAddition(INT_MIN, -1, result)) {
		std::cout << "Correctly detected underflow!" << std::endl;
	}
	// Test 4: Large float to int
	std::cout << "Testing large float conversion: ";
	float largeFloat = 1e10f;
	if (!safeFloatToInt(largeFloat, result)) {
		std::cout << "Correctly rejected oversized float!" << std::endl;
	}
	// Test 5: Precision loss detection
	float precisionTest = 123.456f;
	if (safeFloatToInt(precisionTest, result)) {
	std::cout << "Conversion with precision loss: " << result <<
					 " (lost: " << (precisionTest - result) << ")" << std::endl;
	}
}

class SafeBankingCalculator {
public:
	bool calculateInterest(double principal, double rate, double& result) {
		// Validate inputs
		if (principal < 0 || rate < 0 || rate > 100) {
			return false;
		}
		// Check for potential overflow in calculation
		double maxSafePrincipal = std::numeric_limits<double>::max() / (1 + rate/100);
		if (principal > maxSafePrincipal) {
			return false; // Would cause overflow
	}
		result = principal * (1 + rate/100);
		return true;
	}	
		bool safeDeposit(double currentBalance, int depositAmount, double& newBalance) {
		// Convert deposit to double for calculation
		double deposit = static_cast<double>(depositAmount);
		// Check for overflow
		if (currentBalance > std::numeric_limits<double>::max() - deposit) {
			return false;
		}
		newBalance = currentBalance + deposit;
		return true;
	}
};

int main(){
 
 
// Implicit Type Conversion
// This is done by the compiler
 
	int integerValue = 8;
	double calculatedValue = integerValue/3;
 
	/* The result is an integer since the integerValue is of type int and so
	is 3. So, the fractional part of 2.6666667 (two + two thirds) is truncated.
	The result is stored as a double so it takes up 8 bytes of memory. */
 
	std::cout << "Calculated value: " << calculatedValue << std::endl; // Ans: 2
	std::cout << sizeof(calculatedValue) << " bytes of memory"
			  << std::endl;// Output: 8 bytes
 
 
 
	// Explicit Type Conversion (A.K.A type casting)
	// The user explicitly defines conversion from one type to another.
 
	double piValue = 3.14159;
	int truncatedPi = static_cast<int>(piValue);
	std::cout << "Truncated Pi: " << truncatedPi << std::endl; // Output: 3
	std::cout << sizeof(truncatedPi) << " bytes of memory"
			  << std::endl; // Output: 4 bytes
 
    // Example of potential precision loss due to implicit type conversion
    int scoreSum = 215;
    float averageScore = scoreSum/3;
    std::cout << "scoreSum/3 = " << scoreSum/3 << " occupies " 
    		  << sizeof(scoreSum/3) << " bytes of memory." << std::endl;
    std::cout << "There is a loss of information and the result is an int." 
    		  << " Later the result is stored as a float, which occupies "
    		  << sizeof(averageScore) << " bytes of memory." << std::endl;
    std::cout << "averageScore = " << averageScore << std::endl;
 
    /* integer division results in a truncated value later converted to a float 
    */
 
    // Preventing data loss
 
    /* Armed with an understanding of how implicit conversions can result 
    in errors, it’s essential to adopt best practices to mitigate such risks: */
 
    /* Use Explicit Conversion: Implement type casts explicitly when conversion
    is necessary: */
 
    float correctAverage = static_cast<float>(scoreSum)/3;
    /* converts scoreSum from int to float 3 is then coverted to float by 
    the compiler.  */
    std::cout << "The correct average is: " << correctAverage << std::endl;
 
	// Common Edge Cases:
 
	// Edge case: Maximum integer value
	int maxInt = INT_MAX; // 2,147,483,647 on most systems
	std::cout << "Edge case: maximum integer: " << maxInt << std::endl;
	int overflow = maxInt + 1; // Causes undefined behavior (overflow)
	std::cout << "overflow: " << overflow << std::endl;
	// Edge case: Minimum integer value
	int minInt = INT_MIN; // -2,147,483,648 on most systems
	std::cout << "Edge case: minimum integer: " << minInt << std::endl;
	int underflow = minInt - 1; // Causes undefined behavior (underflow)
	std::cout << "underflow " << underflow << std::endl;
	// Edge case: Zero in division
	double result = 5.0 / 0.0; // Results in infinity
	std::cout << "Edge case: zero division " << result << " results in infinity"
			  << std::endl;
 
	// int intResult = 5 / 0; // Undefined behavior
 
	// std::cout << "Undefined behavior 5/0: " << intResult << std::endl;
 
	// Edge case: Large float to int conversion
	float largeFloat = 1e10f; // 10,000,000,000
 
 
	int converted = static_cast<int>(largeFloat); // May not fit in int
 
	std::cout << "Edge case: float to int, which may not fit in int " 
			  << converted << std::endl;
 
 
	// Boundary conditions
 
	/* Boundary conditions are the limits at which a data type can safely 
	operate. Understanding these helps prevent overflow, underflow, and 
	precision loss: */
	std::cout << "\n --------- DEMONSTRATE BOUNDARIES -----------" << std::endl;
	demonstrateBoundaries(); // Call demonstrateBoundaries
	
 
	/* 
	
	Detecting and Preventing Overflow/Underflow

	Understanding Overflow and Underflow

	Overflow: Occurs when a calculation produces a result too large for the 
	destination type.

	Underflow: Occurs when a calculation produces a result too small for the 
	destination type.

	Detecting Potential Overflow Before It Occurs:
	
	*/
	
	
	std::cout << "\n----- DETECTING POTENTIAL OVERFLOW ----------" << std::endl;
 
	std::cout << willMultiplicationOverflow(-24,30000) << std::endl; 
	
	
	/* Validation Strategies for Type Conversion

	Implementing Safe Conversion Functions 
	
	When converting between types, especially from floating-point to integer
	types, validation is crucial:
	
	*/
	
	std::cout << "\n---- VALIDATION: IMPLEMENTING SAFE CONVERSION FUNCTIONS ---"
			  << std::endl;
			  
	int floatToInt; // modified after AI answered my question on why int& is used
	
	// suggested by AI
	bool success = safeFloatToInt(12.72965f, floatToInt);
	std::cout << "Conversion: " << success << ", Result: " 
		      << floatToInt << std::endl; 
		      

	// Comprehensive type validation
	
	std::cout << "\n ----- COMPREHENSIVE TYPE VALIDATION ------ " << std::endl;
	
	int conversion_dest;
	
	std::cout << static_cast<float>(std::numeric_limits<int>::max()) << std::endl;
	
	bool success_c = safeConvert<float, int>(11.123456f, conversion_dest);
	std::cout << "Conversion: " << success_c << ", Result: " 
		      << conversion_dest << std::endl; 
	 
	/* Testing Edge Cases and Boundary Conditions
       Creating Comprehensive Tests 

       When testing type conversions, focus on these critical scenarios:
       
    */
    
    std::cout << "\n---------- COMPREHENSIVE TESTING ------------" << std::endl;
    std::cout << "\n------EDGE CASES AND BOUNDARY CONDITIONS-----" << std::endl;
    
    std::cout << "\nComprehensive testing of edge cases and boundary conditions: \n"
    		  << std::endl;
    testTypeConversionEdgeCases();
    
    
    std::cout << "\n--------- REAL WORLD APPLICATION -----------" << std::endl;
    std::cout << "\n---------- FINANCE APPLICATION -------------" << std::endl;
    

    SafeBankingCalculator safeBankingCalc;

    //double principalSum, interestRate, answer = safeBanking.calculateInterest(100, 1.5,answer); My initial attempt

	// Closely follows a suggested example by Coursera AI

	double principalSum = 1500;
	double interestRate = 2.5;
	double interestResult;

	if (safeBankingCalc.calculateInterest(principalSum, interestRate, interestResult)) {
		std::cout << "Interest calculated: " << interestResult << std::endl;
	} else {
		std::cout << "Failed to calculate interest due to invalid input or overflow risk."
				  << std::endl;
	}
	
	double currentBalance = 6700.00;
	double depositAmount = 2500;
	double newBalance;

	if (safeBankingCalc.safeDeposit(currentBalance,depositAmount,newBalance)) {
		std::cout << "New Balance after deposit: " << newBalance << std::endl;
	} else {
		std::cout << "Deposit failed due to overflow risk!" << std::endl;
	}
 
    return 0;
}


bool willAdditionOverflow(int a, int b) {
	// Check for positive overflow
	if (a > 0 && b > 0 && a > INT_MAX - b) {
	return true; // Would overflow
	}
	// Check for negative underflow 
	if (a < 0 && b < 0 && a < INT_MIN - b) {
	return true; // Would underflow
	}
	return false; // Safe to add
}

bool safeIntegerAddition(int a, int b, int& result) {
	if (willAdditionOverflow(a, b)) {
	return false; // Unsafe - don't perform operation
	}
	result = a + b;
	return true; // Successfully performed safe addition
}

// Safe Multiplication Check:
bool willMultiplicationOverflow(int a, int b) {
	// Handle special cases
	if (a == 0 || b == 0) return false;
	if (a == 1 || b == 1) return false;
	if (a == -1) return (b == INT_MIN);
	if (b == -1) return (a == INT_MIN);
	// Check for overflow
	if (a > 0 && b > 0) {
		return a > INT_MAX / b;
	}
	if (a < 0 && b < 0) {
		return a < INT_MAX / b;
	}
	if (a < 0) {
		return a < INT_MIN / b;
	} else {
		return b < INT_MIN / a;
	}
}

bool safeFloatToInt(float floatValue, int& result) {
	// Check for infinity or NaN
	if (!std::isfinite(floatValue)) {
		return false;
	}
	// Check if value is within integer range
	if (floatValue > static_cast<float>(INT_MAX) ||
	floatValue < static_cast<float>(INT_MIN)) {
		return false;
	}

	// Check for significant fractional loss (optional)
	float fractionalPart = floatValue - std::floor(floatValue);
	if (std::abs(fractionalPart) > 0.0001f) {
		// Threshold for "significant" loss
		// You might want to warn about fractional loss
		// For this function, we'll still convert but flag it
		std::cout << "Warning! Float to int conversion: fractional loss!"
				  << std::endl;
	}
	result = static_cast<int>(floatValue);
	return true;
}

