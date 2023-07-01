#include <iostream>
using namespace std; // this is the namespace

int main() // this is the main function
{
    int divisor = 0, divident = 0;   // this is the variable declaration
    int quotient = 0, remainder = 0; // this is the variable declaration

    // user  input
    cout << "Enter a divisor: " << endl;
    cin >> divisor;

    cout << "Enter a divident: " << endl;
    cin >> divident;

    // calculation
    quotient = divident / divisor;
    remainder = divident % divisor;

    // out to console

    cout << "quotient : " << quotient << endl;
    cout << "remainder: " << remainder;

    return 0;
} // this is the end of the program