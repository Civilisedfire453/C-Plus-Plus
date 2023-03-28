#include <iostream>
using namespace std;

int main()
{
    int divisor = 0, divident = 0;
    int quotient = 0, remainder = 0;

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
}