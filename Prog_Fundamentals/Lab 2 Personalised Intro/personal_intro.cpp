/*
* Personal Introduction Program
* Created by Patrick Connell
* Date: April 20th, 2026
*
* Description: This program displays information 
* about myself in a formatted way on the console.
*/

/*
* My Learning Goals:
* I hope to learn more of the C++ programming language
* than I already know, e.g., Classes, Data Structures, etc..
* and to gained a recognised credential in doing so.
*/

//Include the necessary header 
#include <iostream> // input/output preprocessor directive
#include <iomanip>// header file to manipulate output formatting

//Main function - program execution starts here
int main()
{
    // Place your code here

    //Display header
    std::cout << "===========================================\
=============" << std::endl;
    std::cout << "             PERSONAL INTRODUCTION         " << std::endl;
    std::cout << "===========================================\
=============" << std::endl;

    //Basic info
    std::cout << std::left << std::setw(25) << "Name: Patrick Connell" << \
std::endl;
    std::cout << std::left << std::setw(25) << "Role: Hotel Night Porter\
" << std::endl;

    //More personal information
    std::cout << std::left << std::setw(25) << "Skills: Python, LaTeX" << \
std::endl;
    std::cout << std::left << std::setw(25) << "Favourite Sport: Hurling" << \
std::endl;
    std::cout << "\n\n" << std::endl;

    // Educational background section
    std::cout << "------------------------------------------------------------\
" << std::endl;
    std::cout << "\n                    EDUCATION                " << std::endl;
    std::cout << "------------------------------------------------------------\
" << std::endl;
    std::cout << std::left << std::setw(25) << "Degree: Theoretical Physics, \
B.Sc." << std::endl;
    std::cout << std::left << std::setw(25) << "School: University College \
Dublin (UCD)" << std::endl;
    std::cout << std::left << std::setw(25) << "Graduation Year: 2004" << \
std::endl;
    std::cout << "\n\n" << std::endl;

    // Career goals
    std::cout << "-----------------------------------------------------------\
" << std::endl;
    std::cout << "\n                 CAREER GOALS                     " << std::endl;
    std::cout  << "-----------------------------------------------------------\
-" << std::endl;
    std::cout  << std::left << std::setw(25) << "Short-term: Obtain a certifi\
cate in C++" << std::endl;
    std::cout  << std::left << std::setw(25) << "Long-term: Become a Data \
Scientist or a Lecturer again." << std::endl; 
    std::cout << "\n\n" << std::endl;

    //Why I am taking this course
    std::cout << "-----------------------------------------------------------\
" << std::endl;
    std::cout << "\n          WHY I'M TAKING THIS COURSE       " << std::endl;
    std::cout << "-----------------------------------------------------------\
"<< std::endl;
    std::cout << std::left << std::setw(25) << "I know the C++ language up\
to the use of arrays, and the reading files and\n writing of files. I have\
also read notes on pointers. However, my learning used the  1998 Standard.\
I would like to learn Modern C++ and gain a recognizable\n certificate in \
doing so.\n\n" << std::endl;
    std::cout << "\n\n" << std::endl;

    // Topics I am excited about
    std::cout << "------------------------------------------------------------\
" << std::endl;
    std::cout << "\n            TOPICS I'M EXCITED ABOUT        " << std::endl;
    std::cout << "------------------------------------------------------------\
" << std::endl;
    std::cout << std::left << std::setw(25) << "I'm excited to learn about\
 data structures, classes, object-oriented\nprogramming and important computing\
 topics that are implemented in\nautomatic differentiation and computational \
fluid dynamics." << std::endl;
    std::cout << "\n\n" << std::endl;

    // Closing message
    std::cout << std::left << std::setw(25) << "\nThank you for reading my \
introduction!" << std::endl;

    //Display footer
    std::cout << "=========================================================\
============" << std::endl;



    // Return statement
    return 0;
}
