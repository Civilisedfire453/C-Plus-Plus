#include <iostream>

int main()
{
    int a = 0; // Variable Declaration and Initialization for the size of the array.

    std::cout << "Please enter the size of the array: "; // Output to the user
    std::cin >> a;                                       // Input from the user
    int array[a];
    int arraysize = sizeof(array) / sizeof(array[0]); // Array Declaration and Initialization

    for (int i = 0; i < a; i++) // Loop for the input of the array
    {
        std::cout << "Please enter the value of array no. " << i << ": "; // Output to the user
        std::cin >> array[i];                                             // Input of Array from the user
    }

    int maxnum = array[0]; // Initialize maxnum as the first element in the array
    int maxcount = 1; // Initialize maxcount as 1

    for (int i = 0; i < a; i++) // Loop for the input of the array
    {
        int count = 1; // Initialize count as 1
        for (int j = i + 1; j < a; j++) // Loop for the input of the array
        {
            if (array[i] == array[j]) // Condition for the largest number in the array
            {
                count++; // Increase the count
            }
        }
        if (count > maxcount) // Condition for the largest number in the array
        {
            maxcount = count; // Assigning the value of the most occuring number to the count
            maxnum = array[i]; // Assigning the value of the array to the largest number
        }
    }

    std::cout << "The array lenght is: " << arraysize << std::endl;
    std::cout << "The most occuring number is: " << maxnum << std::endl; // Output to the user the most occuring number
    std::cout << "The number of times it occured is: " << maxcount << std::endl; // number of times it occured

    return 0;
}