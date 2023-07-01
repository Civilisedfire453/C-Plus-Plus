#include <iostream>

int main()
{

    int numb, sum = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> numb;

    for (int i = 1; i <= 10; i++)
    {
        numb++;
        sum = sum + numb;
    }
    std::cout << "Sum of next 10 numbers is: " << sum << std::endl;

    return 0;
}