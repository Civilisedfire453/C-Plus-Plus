# Function Overloading

Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameters. This is useful when you want to perform the same task on different types of data.

For example you have a function that is called `print()` and it takes an `int` as a parameter. You can overload this function by creating another function called `print()` that takes a `double` as a parameter. This way you can use the same function name for different types of data.

Here is an example of function overloading:

```c++
void print(int n) {
    cout << n << endl;
}

void print(double d) {
    cout << d << endl;
}

int main() {
    print(5);
    print(3.14);
    return 0;
}
```

This code will print the following:

```c++
5
3.14
```

In this example, we have two functions called `print()`. One takes an `int` as a parameter and the other takes a `double`. When we call the `print()` function with an `int` argument, the first function is called. When we call it with a `double` argument, the second function is called.

## Rules for Function Overloading

There are a few things that you need to keep in mind when using function overloading:

* 1. The functions must have the same name.

* 2. The functions must have different parameters. The parameters can be of different types or different numbers of parameters.

* 3. The functions must have different return types. The return types can be different types or different numbers of parameters.

Function overloading is a powerful feature in C++. It allows you to write code that is more readable and maintainable. It also makes your code more reusable, as you can use the same function name for different types of data.

## Advantages and Disadvantages of Function Overloading

Here are some advantages of function overloading:

* It makes your code more readable and maintainable.
* It makes your code more reusable.
* It allows you to write code that is more efficient.
* It can reduce the number of functions in your program.
* It can reduce the number of parameters in your functions.

Here are some disadvantages of function overloading:

* It can make your code more complex.
* It can make your code harder to understand.
* It can make your code harder to maintain.
* It can make your code harder to debug.
* It can make your code less portable to other programming languages.
