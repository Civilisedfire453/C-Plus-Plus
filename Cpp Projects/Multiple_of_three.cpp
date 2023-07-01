// Write a program that asks the user to enter a number and then tells the user whether the number is a multiple of 3 or not.

#include <iostream>

// main function
int main()
{
    // declare variable
    int num = 0;
    // ask user for input and store in variable
    std::cout << "Please enter a number: ";
    std::cin >> num;
    // check if number is a multiple of 3 and print result
    if (num % 3 == 0)
    {
        std::cout << num << " is a multiple of 3";
    }
    else
    {
        std::cout << num << " is not a multiple of 3";
    };
    return 0;
    // end of main function
}