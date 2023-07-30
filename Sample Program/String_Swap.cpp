// This program will compair two diffent strings and swap them if the first string is greater than the second string.

#include <iostream>  // This is the header file for input and output
#include <string>    // This is the header file for string
using namespace std; // This is the standard namespace

int main()
{
    string str1 = "", str2 = ""; // Declartion of two strings

    cout << "Enter the first string: "; // using cout
    getline(cin, str1);            // getting the first string from the user

    cout << "Enter the second string: "; // using cout
    getline(cin, str2);             // getting the second string from the user

   str1.swap(str2); // swaping the values of str1 and str2

    cout << "\n"<< str1 << "\n"<< str2 << endl; // using cout to print the sum of two numbers
}
