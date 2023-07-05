#include <iostream>

int main()
{
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // True if num is perfectly divisible by 2
    if (num % 2 == 0)
        std::cout << num << " is even.";
    else
        std::cout << num << " is odd.";

    return 0;
}