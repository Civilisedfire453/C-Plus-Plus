#include <iostream>

int main()
{
    int a = 0; // Variable Declaration and Initialization for the size of the array.

    std::cout << "Please enter the size of the array: "; // Output to the user
    std::cin >> a;                                       // Input from the user
    int array[a] = {0};                                  // Array Declaration and Initialization

    for (int i = 0; i < a; i++) // Loop for the input of the array
    {
        std::cout << "Please enter the value of array no. " << i << ":"; // Output to the user
        std::cin >> array[i];                                            // Input of Array from the user
    }

    int count = 0; // Variable Declaration and Initialization for the count of the even numbers in the array

    std::cout << "Even numbers in the array: "; // Output to the user
    for (int i = 0; i < a; i++)                 // Loop for the output of the even numbers in the array
    {
        if (array[i] % 2 == 0) // Condition for the even numbers in the array
        {
            count++;                      // Incrementing the count of the even numbers in the array
            std::cout << array[i] << " "; // Output of the even numbers in the array
        }
    }
    std::cout << std::endl;                                                            // Output
    std::cout << "The number of even numbers in the array is: " << count << std::endl; // Output of the count of the even numbers in the array

    return 0; // Return Statement for the main function
}
