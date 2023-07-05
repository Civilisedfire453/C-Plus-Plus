#include <iostream>

int main()
{
    int arr[4] = {0};           // Array Declaration
    for (int i = 0; i < 5; i++) // Loop
    {
        std::cout << "input array value no. " << i << ":"; // Output
        std::cin >> arr[i];                                // Input
    }

    int min = arr[0];           // Variable Declaration
    for (int i = 1; i < 5; i++) // Loop
    {
        if (min > arr[i]) // Condition
        {
            min = arr[i]; // Variable Assignment
        }
    }
    std::cout << "The minumum value is: " << min << std::endl; // Output

    return 0; // Return Statement
} // End of Main Function