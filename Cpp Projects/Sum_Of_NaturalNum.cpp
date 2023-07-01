#include <iostream>

// main function
int main()
{
    int i, sum = 0; // declare variables

    for (i = 1; i <= 10; i++) // for loop
    {
        sum = sum + i; // add x to sum
    }

    std::cout << "Sum of first 10 natural numbers is: " << sum << std::endl; // print sum

    return 0; // return 0 to end program
}
