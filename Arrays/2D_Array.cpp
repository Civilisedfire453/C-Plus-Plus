#include <iostream>
using namespace std;

int main()
{
    int arr[5][5]; // 2D array

    // input
    for (int i = 0; i < 5; i++) // row
    {
        for (int j = 0; j < 5; j++) // column
        {
            cout << endl << "Row is : " << i << " Column is :" << j << " Enter a value: "; // 0,0 0,1 0,2 0,3 0,4
            cin >> arr[i][j]; // 1 2 3 4 5
        }
    }

    // print
    for (int i = 0; i < 5; i++) // row
    {
        for (int j = 0; j < 5; j++) // column
        {
            cout << "Row is : " << i << " Column is :" << j << " Value is : " << arr[i][j] << endl; // 0,0 0,1 0,2 0,3 0,4
        }
    }
    return 0; // end of program
}
