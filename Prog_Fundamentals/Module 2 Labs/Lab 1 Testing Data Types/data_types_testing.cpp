#include <iostream>
#include <climits> // For INT_MAX constant
#include <limits> // For the range(i.e., numeric limits) of data types
#include <cfloat> // For DBL_MAX constant, FLT_MAX and other constants
		  
int main(){
	// Declare variables of different data types
	int playerLevel = 25;
	short int shortInt = 3;
	long int longInt = 3;
	long long int long_longInt = 3;
	float itemPrice = 19.99f;
	double preciseCalculation = 3.1459265359;
	long double pi = 3.1415926535897932384626433832795028841971;
	char playerRank = 'A';
	bool gameActive = true;
	

	// Display the memory usage of each data type
	std::cout << "\n--- MEMORY USAGE ANALYSIS ON MSYS2 MINGW64 -----: " << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << "int uses: " << sizeof(int) << " bytes of memory." << std::endl;
	std::cout << "short uses: " << sizeof(short) << " bytes of memory." << std::endl;
	std::cout << "short int uses: " << sizeof(short int) << " bytes of memory." << std::endl;
	std::cout << "long uses: " << sizeof(long) << " bytes of memory." << std::endl;	
	std::cout << "long long uses: " << sizeof(long long) << " bytes of memory." << std::endl;
	std::cout << "float uses: " << sizeof(float) << " bytes of memory." << std::endl;
	std::cout << "double uses: " << sizeof(double) << " bytes of memory." << std::endl;
	std::cout << "long double uses: " << sizeof(long double) << " bytes of memory." << std::endl;
	std::cout << "char uses: " << sizeof(char) << " byte of memory." << std::endl;
	std::cout << "bool uses: " << sizeof(bool) << " byte of memory.\n" << std::endl;

	//Display the memory usage of each variable
	std::cout << "\n--- MEMORY USAGE ANALYSIS FOR THE DEFINED VARIABLES -----: " << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << "The variable playerLevel uses: " << sizeof(playerLevel) << " bytes of memory." << std::endl;
	std::cout << "The variable shortInt uses: " << sizeof(shortInt) << " bytes of memory." << std::endl;
    std::cout << "The variable longInt uses: " << sizeof(longInt) << " bytes of memory." << std::endl;
	std::cout << "The variable long_longInt uses: " << sizeof(long_longInt) << " bytes of memory." << std::endl;
	std::cout << "The variable itemPrice uses: " << sizeof(itemPrice) << " bytes of memory." << std::endl;
	std::cout << "The variable preciseCalculation uses: " << sizeof(preciseCalculation) << " bytes of memory." << std::endl;
	std::cout << "The variable pi uses: " << sizeof(pi) << " bytes." << std::endl;
	std::cout << "The variable playerRank uses: " << sizeof(playerRank) << " byte of memory." << std::endl;
	std::cout << "The variable gameActive uses: " << sizeof(gameActive) << " byte of memory.\n" << std::endl;
	
	// Display number of bytes and the range of the different data types on

	std::cout << "\n--- MEMORY USAGE, LIMITS AND RANGES OF DATA TYPES ON MSYS2 MINGW64 -----: " << std::endl;
	std::cout << "\n" << std::endl;
	/* std::cout << "The smallest int is: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "The lowest int vis: " << INT_MIN  << std::endl;
	std::cout << "The greatest int is: " << INT_MAX  << "\n\n" <<  std::endl;
	std::cout << "The lowest short int is: " << std::numeric_limits<short>::min() << std::endl;
	std::cout << "The greatest short int is: " << std::numeric_limits<short>::max() << std::endl;
	std::cout << "The lowest short int is: " << SHRT_MIN << std::endl;
	std::cout << "The greatest short int is: " << SHRT_MAX << std::endl;
	std::cout << "The minimum of the range for long is: " << LONG_MIN << std::endl;
	std::cout << "The maximum of the range for long is: " << LONG_MAX << std::endl;
	std::cout << "The minimum of the range for long long is: " << LLONG_MIN << std::endl;
	std::cout << "The maximum of the range for long long is: " << LLONG_MAX << std::endl;
	std::cout << "The minimum of the range for double is: " << DBL_MIN << std::endl;
	std::cout << "The maximum of the range for double is: " << DBL_MAX << std::endl;
	*/

	std::cout << "The data type \'int\' is used to represent integers." << std::endl;
	std::cout << "int uses: " << sizeof(int) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of int is: " << INT_MIN << std::endl;
	std::cout << "The maximum value of int is: " << INT_MAX << "\n" << std::endl;

	std::cout << "The data type \'short int\' A.K.A \'short\' is used to represent integers." << std::endl;
	std::cout << "short int uses: " << sizeof(short) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of short int is: " << SHRT_MIN << std::endl;
	std::cout << "The maximum value of short int is: " << SHRT_MAX << "\n" << std::endl;

	std::cout << "The data type \'long int\' A.K.A \'long\' is used to represent integers." << std::endl;
	std::cout << "long int uses: " << sizeof(long) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of long int is: " << LONG_MIN << std::endl;
	std::cout << "The maximum value of long int is: " << LONG_MAX << "\n" << std::endl;

	std::cout << "The data type \'long long int\' A.K.A \'long long\' is used to represent integers." << std::endl;
	std::cout << "long int uses: " << sizeof(long long) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of long long int is: " << LLONG_MIN << std::endl;
	std::cout << "The maximum value of long long int is: " << LLONG_MAX << "\n" << std::endl;

	std::cout << "The data type \'float\' is used to represent numbers to 7 decimal digits \nof precision." << std::endl;
	std::cout << "float uses: " << sizeof(float) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of float is: " << FLT_MIN << std::endl;
	std::cout << "The maximum value of float int is: " << FLT_MAX << "\n" << std::endl;

	std::cout << "The data type \'double\' is used to represent numbers to 15 decimal digits \nof precision." << std::endl;
	std::cout << "double uses: " << sizeof(double) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of double is: " << DBL_MIN << std::endl;
	std::cout << "The maximum value of double int is: " << DBL_MAX << "\n" << std::endl;

	std::cout << "The data type \'long double\' is used to represent numbers to 15 decimal digits \nof precision." << std::endl;
	std::cout << "long double uses: " << sizeof(long double) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of double is: " << LDBL_MIN << std::endl;
	std::cout << "The maximum value of double int is: " << LDBL_MAX << "\n" << std::endl;

	std::cout << "The data type \'char\' is used to represent characters such as letters or symbols." << std::endl;
	std::cout << "long double uses: " << sizeof(char) << " byte of memory. " << std::endl;
	std::cout << "The minimum value of char is: " << CHAR_MIN << std::endl;
	std::cout << "The maximum value of char int is: " << CHAR_MAX << "\n" << std::endl;

	std::cout << "The data type \'bool\' is used to represent a variable which has a value \nof true(1) or false(0)." << std::endl;
	std::cout << "long double uses: " << sizeof(bool) << " byte of memory. " << std::endl;
	std::cout << "The minimum value of bool is: " << false << std::endl;
	std::cout << "The maximum value of bool int is: " << true << std::endl;

	std::cout << "\n\nThere are other data types: unsigned int, unsigned short int,\n\
unsigned long int, unsigned long long int, and unsigned char.\n" << std::endl;

	std::cout << "The data type \'unsigned int\' is used to represent integers." << std::endl;
	std::cout << "unsigned int uses: " << sizeof(unsigned int) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of unsigned int is: " << std::numeric_limits<unsigned int>::min() << std::endl;
	std::cout << "The maximum value of unsigned int is: " << UINT_MAX << ".\n" << std::endl;

	std::cout << "The data type \'unsigned short int\' A.K.A \'unsigned short\' is used to represent integers." << std::endl;
	std::cout << "unsigned short int uses: " << sizeof(unsigned short int) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of unsigned short int is: " << std::numeric_limits<unsigned short int>::min() << std::endl;
	std::cout << "The maximum value of unsigned short int is: " << USHRT_MAX << ".\n" << std::endl;

	std::cout << "The data type \'unsigned long int\' A.K.A \'unsigned long\' is used to represent integers." << std::endl;
	std::cout << "unsigned long int uses: " << sizeof(unsigned long int) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of unsigned long int is: " << std::numeric_limits<unsigned long int>::min() << std::endl;
	std::cout << "The maximum value of unsigned long int is: " << ULONG_MAX << ".\n" << std::endl;
	
	std::cout << "The data type \'unsigned long long int\' A.K.A \'unsigned long long\' is used to represent integers."\
	<< std::endl;
	std::cout << "unsigned long long int uses: " << sizeof(unsigned long long int) << " bytes of memory. " << std::endl;
	std::cout << "The minimum value of unsigned long long int is: " << std::numeric_limits<unsigned long long int>::min() \
	<< std::endl;
	std::cout << "The maximum value of unsigned long long int is: " << ULLONG_MAX << ".\n" << std::endl;

	std::cout << "The data type \'unsigned char\' is used to represent letters or symbols." << std::endl;
	std::cout << "unsigned char uses: " << sizeof(unsigned char) << " byte of memory. " << std::endl;
	std::cout << "The minimum value of unsigned char is: " << 0 << std::endl;
	std::cout << "The maximum value of unsigned char is: " << UCHAR_MAX << ".\n" << std::endl;

	return 0;
}

