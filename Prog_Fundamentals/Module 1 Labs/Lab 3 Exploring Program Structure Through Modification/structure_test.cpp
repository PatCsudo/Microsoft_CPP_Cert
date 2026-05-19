/* Lab 3, Exploring Program Structure Through Modification
* In this hands-on exploration, you'll discover how each 
* component of a C++ program contributes to successful compilation
* and execution. By systematically modifying a working program and 
* observing the resulting errors, you'll gain a deep understanding
* of why preprocessor directives, proper function signatures, and 
* correct syntax are essential. This detective-like approach to *
* learning helps you become proficient at diagnosing and fixing 
* structural issues—a crucial skill for any developer.

* By the end of this activity, you will be able to:

    % Identify the critical role of preprocessor directives in C++ programs

    % Recognize the importance of proper main() function structure

    % Understand how code organization affects compilation success

    % Interpret common compiler error messages related to program structure

*/

#include <iostream>
/* Omitting #include <iostream> leads to the following error message:

structure_test.cpp: In function ‘int main()’:
structure_test.cpp:4:10: error: ‘cout’ is not a member of ‘std’
    4 |     std::cout << "Hello, World!" << std::endl;
      |          ^~~~
structure_test.cpp:1:1: note: ‘std::cout’ is defined in header ‘<iostream>’; did you forget to ‘#include <iostream>’?
  +++ |+#include <iostream>
    1 | // #include <iostream>
structure_test.cpp:4:42: error: ‘endl’ is not a member of ‘std’
    4 |     std::cout << "Hello, World!" << std::endl;
      |                                          ^~~~
structure_test.cpp:1:1: note: ‘std::endl’ is defined in header ‘<ostream>’; did you forget to ‘#include <ostream>’?
  +++ |+#include <ostream>
    1 | // #include <iostream>

*/

using namespace std;

// Change int main() to double main()

/* Error message: 

structure_test.cpp:23:1: error: ‘::main’ must return ‘int’
   23 | double main() {
      | ^~~~~~

*/

/*

Placing the cout statement before main() results in the error 
message

structure_test.cpp:32:1: error: ‘cout’ does not name a type
   32 | cout << "Hello, World!" << std::endl;
      | ^~~~

cout << "Hello, World!" << std::endl;

*/
int main() {
     // cout << "Hello, World!" << std::endl;
    /*
    Changing std::cout to cout (without the include) results in the error
    message:

    structure_test.cpp: In function ‘int main()’:
structure_test.cpp:21:5: error: ‘cout’ was not declared in this scope
   21 |     cout << "Hello, World!" << std::endl;
      |     ^~~~
structure_test.cpp:21:37: error: ‘endl’ is not a member of ‘std’
   21 |     cout << "Hello, World!" << std::endl;
      |                                     ^~~~
structure_test.cpp:1:1: note: ‘std::endl’ is defined in header ‘<ostream>’; did you forget to ‘#include <ostream>’?
  +++ |+#include <ostream>
    1 | // #include <iostream>

    */
   

    
    
    /* change std::cout to cout after placing using namespace std;
    after #include <iostream>
    */
    // cout << "Hello, World!" << std::endl; // no compilation errors

    /*

    Removing the smicolon from the end of the cout statement
    
    cout << "Hello, World!" << std::endl

    returns the error message
    structure_test.cpp: In function ‘int main()’:
structure_test.cpp:56:41: error: expected ‘;’ before ‘return’
   56 |     cout << "Hello, World!" << std::endl // no compilation errors
      |                                         ^
      |                                         ;
   57 | 
   58 |     return 0;
      |     ~~~~~~    
      
      */

    cout << "Hello, World!" << std::endl;
{} /* An empty pair of braces withing main() produces no compilation errors. */

    /* return 0; Omitting the return 0; statement doesn't yield a 
    compilation error. The program returns the default exit code, which is
    platform dependent.
    */
   return 0;

}
/* Typing an open brace { automatically produces a closing }.
* Typing a closing brace without a matching opening brace in the middle
* of the code after the cout statement but before the return statement
* closes the function main() and the final } is turned red by the
* IDE. The following error message is returned when compilation is attempted:
* structure_test.cpp:98:1: error: expected declaration before ‘}’ token
   98 | }
      | ^
*/

