#include <iostream>
int main() // Main Function
{

    int array[5][5]; // 2D array with 5 rows and 5 columns"
    int sum = 0;     // Variable Declaration and Initialization for the sum of the array

    // Input for the rows `i` and columns `j`
    for (int i = 0; i < 5; i++) // row
    {
        for (int j = 0; j < 5; j++) // column
        {
            std::cout << std::endl                                                      // Output to the user
                      << "Row is : " << i << " Column is :" << j << " Enter a value: "; // Output to the user
            std::cin >> array[i][j];                                                    // Input from the user
        }
    }

    // loop for the sum of the array.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += array[i][j]; // Sum of the array calculation using loop.
        }
    }

    // Output of the sum of the array
    std::cout << "\n The sum of the array is: "
              << sum << std::endl;

    return 0;
} // End of the main function
