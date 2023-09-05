/*Factorial*/
#include <iostream> // cout, cin

using namespace std; // std namespace

int myRecursion(int); // forward declaration

int main() { // main function
	int num = 0; // variable declaration
	int result = 0; // variable declaration

	cout << "Enter a number "; // prompt
	cin >> num; // input

	result = myRecursion(num);// function call
	cout << result; // output

	return 0; // program termination
} // end of main function

int myRecursion(int num) { // function definition
	if (num > 0) { // if num is greater than 0
		// Recursive case: multiply num with the factorial of num - 1
		return (num * myRecursion(num - 1));
	} else {
		// Base case: factorial of 0 is 1
		return 1; // return 1
	} // end of if statement
} // end of function definition
