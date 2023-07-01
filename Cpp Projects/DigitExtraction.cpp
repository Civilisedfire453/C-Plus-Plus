#include <iostream>
using namespace std;

int main()
{
    // Declaration
    int num, first, second, last = 0;

    // Input
    cout << "Enter a number: ";
    cin >> num;

    // Logic
    first = num / 100;
    second = (num / 10) % 10;
    // another way to get the  second = (num%100) /10;
    last = num % 10;

    // Output
    cout << "First digit: " << first << endl;
    cout << "Second digit: " << second << endl;
    cout << "Last digit: " << last << endl;
    return 0;
} // End of main()