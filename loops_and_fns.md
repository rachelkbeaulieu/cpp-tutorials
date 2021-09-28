# Loops and Functions

## Loop types
* C++ has four different types of loops:
  * While loops
  * For loops
  * Do while loops
  * Nested loops

#### While loops
* While loops repeat a statement or a group of statements while a given condition is true
* The loop tests this condition before executing the loop body
```C++
#include <iostream>
using namespace std;

int main() {
  int i = 1;
  while (i < 6) {
    cout << "Hello World\n";
    i++;
  }
  return 0;
}
```
* This prints "Hello World" six times

#### For loops
* Executes a sequence of statements multiple times and abbreviates the code that manages the code variable
```C++
#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    cout << "Hello World\n";
  }
  return 0;
}
```
* This prints "Hello World" ten times

#### Do while loops
* Similar to a `while` loop, except that it tests the condition at the **end** of the loop body
```C++
#include <iostream>
using namespace std;

int main(){
  int i = 2;
  do {
    cout << "Hello World\n";
    i++;
  } while (i < 1);
  return 0;
}
```
* This prints "Hello World" one time

#### Nested loops
* Using one or more loop inside any other `while`, `for`, or `do while` loop

## Functions 
* Functions are blocks of code that only run when "called"
* They can take in data, or parameters
* Functions are important for reusing code and for performing certain actions

### Declaring functions
* To declare a function, specify the name of the function followed by parentheses `( )`
```C++
void goodFunctionName() {
  cout << "Definitely a good function";
}
```
* Okay, maybe not a good function usage, but you get the point!
* Since declared functions aren't executed immediately, we have to call them
  * To call a function, write the function's name followed by two parentheses `( )` and a semicolon
```C++
int main() {
  goodFunctionName();
  return 0;
}
```
* This "calls" `goodFunctionName()` and runs the function, giving the output of "Definitely a good function"

### Function rules
* Functions must be declared **before** the `main()` function (or before whatever function is calling it)
  * This error can be avoided by declaring the function before the `main()` function, and then giving the function definition after
 ```C++
void goodFunctionName();

int main() {
  goodFunctionName();
  return 0;
}

void goodFunctionName() {
  cout << "Definitely a good function";
}
```

### Recursive functions
* Recursive functions are when a function is called within the same function
```C++
#include<iostream>  
using namespace std;    
int main() {  
  int factorial(int);  
  int fact,value;  
  cout<<"Enter any number: ";  
  cin>>value;  
  fact=factorial(value);  
  cout<<"Factorial of a number is: "<<fact<<endl;  
  return 0;  
}  

int factorial(int n) {  
  if(n<0)  
    return(-1);   
  if(n==0)  
    return(1); 
  else {  
    return(n*factorial(n-1));      
   }  
}  
```
### Function parameters 
* Function parameters are the information you send into a function, which act as variables inside the function
* Parameters are specified within the parentheses
* C++ can support as many parameters as you want, but they have to be separated by a comma

### Function return
* C++ can only return one value
* There are multiple workarounds for returning more than one value, however
  * Pointers - pass the argument with their address and make changes in their value using a pointer
  * Structures - define a structure with the amount of integer values you want and store the variables into the structure
  * Arrays - (only works when items are the same type) an array needs to be passed as an argument and then whatever changes are made to the copy of the array, are changed in the original array as well

### Pass-by-value vs. pass-by-reference in C++
* Pass-by-value means to copy the actual value of an argument into a parameter, but when changes are made to the original value, it has no effect on the copied value
* Pass-by-reference means to copy the actual value of an argument into a parameter, but when changes are made to the original value, the copied value **does change** to match the updated original value 
  * This change occurs because the **storage location** is what is given to the copied value, rather than what is stored there -- when you update what is stored, everything pointing to it will have the same value
* C++ by default uses pass-by-value arguments, but can be modified to use pass-by-reference
* To make C++ produce pass-by-reference, modify the function declaration to be `void passbyref(int &x, int &y)` rather than `void passbyval(int x, int y)`



## Sources
1. https://www.tutorialspoint.com/cplusplus/cpp_loop_types.htm
2. https://www.geeksforgeeks.org/loops-in-c-and-cpp/
3. https://www.w3schools.com/cpp/cpp_functions.asp
4. https://www.javatpoint.com/cpp-recursion
5. https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/
6. https://www.ibm.com/docs/en/zos/2.4.0?topic=calls-pass-by-reference-c-only
