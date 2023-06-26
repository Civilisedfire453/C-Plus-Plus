# Conditions in C++

C++ has the following conditional statements:

* `if`
* `else`
* `else if`

The `if` statement is used to specify a block of code to be executed, if a specified condition is true. The `else` statement is used to specify a block of code to be executed, if the same condition is false. The `else if` statement is used to specify a new condition to test, if the first condition is false.

Here is an example of an `if` statement in C++:

```c++
#include <iostream> 
// header file

int main() { 
    // main function
  int number = 10; 
  // variable

  if (number % 2 == 0) {  
    // if statement
    std::cout << "The number is even." << std::endl;
  } else { 
    // else statement
    std::cout << "The number is odd." << std::endl;
  } 
  // end of if statement

  return 0; 
  // return statement
}       
// end of main function
```