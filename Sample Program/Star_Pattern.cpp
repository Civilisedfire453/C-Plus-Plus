#include <iostream>

// main function

int main()
{
    // declare variables
    int x, y = 0;

    // for loop
    for (x = 0; x < 5; x++)
    { // nested for loop
        for (y = 0; y < x + 1; y++)
        { // print *
            std::cout << "*";
        }
        // print new line
        std::cout << std::endl;
    }
    return 0;
    // return 0 to end program
}