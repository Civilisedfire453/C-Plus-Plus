
# Recursion in C++
Recursion is a programming technique in which a function calls itself to solve a problem. It is a powerful and elegant way to solve problems that can be broken down into smaller, similar sub-problems. In C++, recursion is commonly used for tasks like tree traversal, searching, and solving problems with recursive mathematical definitions.

## Basics of Recursion
In a recursive function, there are two main components:

Base Case: This is the termination condition that prevents the function from calling itself infinitely. It defines the smallest possible sub-problem that can be solved directly.

Recursive Case: This is where the function calls itself with a modified input to solve a larger problem by breaking it down into smaller, similar sub-problems.

Example 1: Factorial Calculation
```cpp

#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
// Base case
if (n <= 1) {
return 1;
}
// Recursive case
else {
return n * factorial(n - 1);
}
}

int main() {
int n = 5;
int result = factorial(n);
std::cout << "Factorial of " << n << " is " << result << std::endl;
return 0;
}
```

In this example, the factorial function calculates the factorial of a number n using recursion. The base case is when n is 1 or less, and the recursive case calls factorial with a smaller value of n.
___

## Recursion vs. Iteration
Example 2: Fibonacci Series
```cpp
#include <iostream>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
// Base cases
if (n == 0) {
return 0;
}
if (n == 1) {
return 1;
}
// Recursive case
else {
return fibonacci(n - 1) + fibonacci(n - 2);
}
}

int main() {
int n = 7;
int result = fibonacci(n);
std::cout << "Fibonacci(" << n << ") is " << result << std::endl;
return 0;
}
```
In this example, the fibonacci function calculates the nth Fibonacci number using recursion. The base cases are when n is 0 or 1, and the recursive case computes the Fibonacci number by summing the previous two Fibonacci numbers.
___


Recursion should be used carefully, as it can lead to stack overflow errors if not managed properly. In some cases, it might be more efficient to use iterative solutions instead of recursion.