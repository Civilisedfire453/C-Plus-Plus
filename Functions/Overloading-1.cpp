#include <iostream> // using IO functions
#include <string> // using string functions

using namespace std; // using the standard namespace

void add(int a, int b) { 
    cout << "Sum of two integers is " << a + b << "." << endl;
}

void add(double a, double b) {
    cout << "Sum of two doubles is " << a + b << "." << endl; 
}

void add(string a, string b) {
    cout << "Sum of two strings is" << a + b << "."<< endl; 
}

/* 
    Here I overload the add function where intially 
    it was a int and then I cange it to be a double
*/

int main() {
    add(1, 2); // calls the first add function
    add(11, 22); // calls the second add function where the parameters are doubles
    add(" Hello", " World"); // calls the third add function where the parameters are strings
    return 0;
}

