#include <iostream>

using namespace std;

// Declaring the function that takes noting and returns nothing
void print() {
    cout << "Hello" << endl;
}

// Declaring the function that takes something and returns something
int num(int a, int b) {
    int sum;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    sum = a + b;
    return sum;
}

// Declaring the function that takes something and returns nothing
void print(const string& name) {
    cout << "Name: " << name << endl;
}

// Main function
int main() {
    // Declaring the variables
    string name;
    int a = 0;
    int b = 0;

    // Calling the void function that takes noting and returns nothing
    print();
    cout << endl;

    // Calling the num function that takes something and returns something
    int sum = num(a, b);
    cout << "The sum is: " << sum << endl;
    cout << endl;


    // Calling the void function that takes something and returns nothing
    print("John Doe");
    cout << endl;

    // Return 0 to the operating system
    return 0;
}
// End of main function
