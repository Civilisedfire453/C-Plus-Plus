## Functions in C++

A function in C++ is a block of code that performs a specific task. Functions are used to modularize code, making it easier to read, understand, and maintain. They also make code more reusable, as you can define a function once and call it from multiple places in your program.

To define a function in C++, you use the `function` keyword. The syntax for defining a function is as follows:

```cpp
function_name(parameters) {
// Statements that perform the function's task
}
```
The function_name is the name of the function. The parameters are the values that are passed to the function when it is called. The statements are the code that performs the function's task.

Here is an example of a function that calculates the factorial of a number:

```c++
int factorial(int n) {
int result = 1;
for (int i = 2; i <= n; i++) {
result *= i;
}
return result;
}
```
This function takes one parameter, `n`, which is the number whose factorial is to be calculated. The function first initializes a variable `result` to 1. Then, it uses a for loop to iterate from 2 to `n`. In each iteration of the loop, the value of `result` is multiplied by `i`. 
Finally, the function returns the value of `result`.

To call a function, you use the function's name followed by a set of parentheses. 
The parentheses may contain the values of the function's parameters. 
For example, the following code calls the `factorial()` function to calculate the factorial of 5:

```c++
int result = factorial(5);
```
This code will store the value of the factorial of 5 in the variable result.

Functions are an essential part of C++ programming. They allow you to modularize your code, make it more readable and maintainable, and reuse code.