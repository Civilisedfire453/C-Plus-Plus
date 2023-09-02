#include <iostream> // Include the input/output stream library
#include <string> // Include the string library

using namespace std; // Using the standard namespace
void add(int a, int b); // Function declaration
void add(double a, double b, double c); // Function declaration

int main() {
    add(1, 2); // Calls first function
    add(1.2, 2.3, 3.4); // Calls second function
    return 0; // Return 0 to indicate normal termination
}

void add(int a, int b) { // Function definition
    cout << "Sum of " << a << " and " << b << " is " << a + b << endl; // Print the sum
}// Function definition

void add(double a, double b, double c) { // Function definition
    cout << "Sum of " << a << " + " << b << " + "<< c << " is " << a + b + c << endl; // Print the sum
}// Function definition