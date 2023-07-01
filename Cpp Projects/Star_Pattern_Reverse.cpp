#include <iostream>

// main function
int main()
{
    int x, y = 0; // declare variables}
    for (x = 0; x < 5; x++)
    { // nested for loop
        for (y = 5; y > x; y--)
        { // print *
            std::cout << "*";
        }
        // print new line
        std::cout << std::endl;
    }

    return 0;
}