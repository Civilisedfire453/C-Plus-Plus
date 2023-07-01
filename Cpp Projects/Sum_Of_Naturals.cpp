#include <iostream>
// main function
int main()
{
    int x = 1, sum = 0; // declare variables
    // loop body
    while (x <= 10) // condition
    {
        sum = sum + x; // add x to sum
        x++;           // increment x by 1
    }
    std::cout << "Sum of first 10 natural numbers is: " << sum << std::endl; // print sum

    return 0;
}