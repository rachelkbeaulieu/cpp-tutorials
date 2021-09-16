# Data Types and Naming Conventions in C++

## Naming Requirements
* Names can range from 1 to 255 characters
* Variable names have to begin with a letter in the alphabet or an underscore
* They can be composed of letters, numbers, and underscores
* These names are case-sensitive
* NO spaces or special characters
* NO C++ reserved words can be variable names (e.g., int)

### Naming Conventions
* C++ variables should be identified with **unique** names (e.g., minutesPerHour vs. m)
* Preprocessor macros should be all upper-case
* Boolean variables begin with a b, followed by a CamelCase name
* Avoid abbreviations that aren't obvious to a reader
* Use CamelCase for all names 
  * Certain types (e.g., classes) should start with a capital letter
  * Other names should start with a lowercase letter
  * All lowercase is OK if it resembles an external construct (e.g., a library)
* Global variables are named with a g_ prefix
* Static class variables are named with a s_ prefix
* Global constants are named with a c_ prefix
These naming conventions are **not** enforced by the compiler, but rather the "norm" within the community.

## Statically or dynamically typed? Strongly or weakly typed?
C++ is a **statically** typed language. This means that values are fixed at compiling time and cannot be changed.
Surprisingly, C++ is a **weakly** typed language. C++ is weakly typed since it is easy to create a nest of implicit type conversions. Outside of this exception, C++ would be considered a **strongly** typed language.

## Adding Strings to Integers
In C++, if you to try to add "5" + 6, the code will give you an error message. If you remove the quotations around the 5, you will get the correct answer: 11. Having quotations around the 5 and the 6 will also produce an error. We can, however, convert the numeric 6 into a string by individually setting the "5" and 6 as their own variables, which would end up printing 56 rather than 11. Basically, you can concatanate a string and a numeric, but not add them explicitly. 

## Limitations and advantages of assignment
* While in addition, C++ will automatically convert 5 to a float when added to 10.5, C++ will not make this conversion when dividing by two integers, such as 15/2.
* C++ cannot have a vector containing more than a single type, but there are work arounds, such as linked lists
* Implicit data conversions **can** be done within C++, such as converting from bool to char, char to short int, and short int to int

## Complex, commonly used data types
* void --> no storage
* auto --> when a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the initializer
* decltype --> variables that are not initialized can make use of the type deduction 
* character sequences --> arrays that can store up to 20 elements of the char type (20 characters)
* pointers --> the variable that stores the address of another variable

## Sources
1. https://www.cplusplus.com/doc/tutorial/
2. https://www.tutorialspoint.com/What-are-the-rules-to-declare-variables-in-Cplusplus
3. https://www.w3schools.com/cpp/cpp_variables_identifiers.asp
4. https://manual.gromacs.org/documentation/5.1-current/dev-manual/naming.html
5. https://accu.org/journals/overload/21/115/fabijanic_1855/



