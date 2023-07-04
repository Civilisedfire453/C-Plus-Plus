#include <iostream>

int main() // Main Function
{
    int arr[] = {100, 200, 300, 400, 500}; // Array Declaration
    int arraySize = 0;                     // Variable Declaration

    arraySize = sizeof(arr) / sizeof(arr[0]);                          // Calculating Array Size
    std::cout << "Size of arr is: " << sizeof(arr) << std::endl;       // Printing Array Size
    std::cout << "Size of arr 0 is: " << sizeof(arr[0]) << std::endl; // Printing Array Size
    std::cout << "Array Size: " << arraySize << std::endl;             // Printing Array Size

    return 0;
}
