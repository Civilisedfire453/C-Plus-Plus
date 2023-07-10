#include <iostream>
int main()
{
    int a = 0; // Variable Declaration and Initialization for the size of the array.

    std::cout << "Please enter the size of the array: "; // Output to the user
    std::cin >> a;                                       // Input from the user
    int array[a] = {0};                                  // Array Declaration and Initialization

    for (int i = 0; i < a; i++) // Loop for the input of the array
    {
        std::cout << "Please enter the value of array no. " << i << ": "; // Output to the user
        std::cin >> array[i];                                            // Input of Array from the user
    }

    int largest = array[0];  // Variable Declaration and Initialization for the largest number in the array
    int secondLargest = array[1]; // Variable Declaration and Initialization for the second largest number in the array

    for (int i = 2; i < a; i++) //loop for the second largest number in the array
    {
        if (array[i] > largest) // Condition for the largest number in the array
        {
            secondLargest = largest; // Assigning the value of the largest number to the second largest number
            largest = array[i]; // Assigning the value of the array to the largest number
        }
        else if (array[i] > secondLargest && array[i] < largest) // Condition for the second largest number in the array
        {
            secondLargest = array[i];
        }
    }

    std::cout << "The second largest number is: " << secondLargest << std::endl;

    return 0; // Return Statement for the main function
}
