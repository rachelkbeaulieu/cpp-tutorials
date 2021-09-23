# if/else, switch case, logical operators in C++

## Boolean values
* Boolean values are used to denote "true" or "false" statements
* "true" is stored as 1, "false" is stored as 0
* In C++, the reserved boolean values are "true" and "false" (notice all lowercase)
  * However, if you initialize with: `bool x = 75;`, x will be stored as "true", or 1
  * Any numeric value other than 0 will be stored as "true", or 1
  * If you initialize with 0, this will signify "false"

## Conditional statements
* Conditional statements are logic statements that modify how code is run (if x condition is met, do this)
* C++ has the basic conditional statments that appear in most programming languages:
  * if
  * if else
  * else
* There can be nested conditional statements 
```C++
if (y > 10) {
  if (x > 10) {
    cout << "a nested statement!";
  } else {
    cout << "still a nested statement!";
  } 
} else {
  cout << "no nesting here :(";
}
```
* If/else statements can be rewritten as one liners using the `?` operator
  * Example: 
   ```C++
   if (y > 10) {
      var = 30;
    } else {
      var = 40;
    }
    ```
  * Can be rewritten as:
   ```C++
   var = (y < 10) ? 30 : 40;
   ```

## Short-circuit evaluation
* Short-circuiting avoids unnecessary calculation, where if the first logical condition is met (or not met), the program will not look at the second condition
* In C++, short-circuiting happens when using `&&` (AND) and `||` (OR) logical operators

## Dangling problem
* The dangling problem occurs when an optional `else` case in an `if-then-else` statement results in nested conditionals being ambiguous
* This occurs in C++ when the braces `{ }` in `if` statements or loops are omitted
  * When the braces are omitted, only one line of code is considered in the code block (which can pose many problems!)
* To avoid this problem, when in doubt, use the braces!! ☺

## Switch cases
* Switch cases are used as a substitute for long `if` statements to compare several numeric values in C++
```C++
switch (y) {
  case 1:
    cout << "y is 1\n";
  case 90:
    cout << "y is 90\n";
  case 100:
    cout << "y is 100\n";
}
```
* In the above example, after one case is met, it will fulfil all of the following cases
  * If case 1 was met, it would print all three values
* To avoid this, you use `break`
```C++
switch (y) {
  case 1:
    cout << "y is 1\n";
    break;
  case 90:
    cout << "y is 90\n";
    break;
  case 100:
    cout << "y is 100\n";
    break;
}
```
* In this example, if case 1 was met, it would **only** print "y is 1\n"


## Sources
1. https://www.educative.io/edpresso/what-is-boolean-in-cpp
2. https://www.tutorialspoint.com/cplusplus/cpp_conditional_operator.htm
3. https://en.wikipedia.org/wiki/Dangling_else#:~:text=The%20dangling%20else%20is%20a,than%20one%20correct%20parse%20tree.
