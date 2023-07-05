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

    int sum = 0; // Variable Declaration and Initialization for the sum of the array

    for (int i = 0; i < a; i++) // Sum of the array calculation using loop.
    {
        sum += array[i];
    }
    /*Note: you can also do sum = array[1] + ....
    depends on the size of the array as you can
    see above I have used a for loop to make it more simple.
    */
    std::cout << "The sum of the array is: " << sum << std::endl; // Output of the sum of the array

    int parray = 1; // Variable Declaration and Initialization for the product of the array
    for (int i = 0; i < a; i++)

    {
        parray *= array[i];
    }
    std::cout << "The product of the array is: " << parray << std::endl; // Output of the product of the array

    return 0; // Return Statement for the main function
}