#include <iostream>
int main()
{
    int input = 0;
    int factorial = 1;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> input;

    for (int i = input; i > 0; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "Factorial of " << input << " is: " << factorial << std::endl;
    return 0;
}