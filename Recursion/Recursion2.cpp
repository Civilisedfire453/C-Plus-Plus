//
// Created by vedlo on 6/09/2023.
//

#include <iostream> // cout, cin

using namespace std; // std namespace

int sum(int); // forward declaration

int main() { // main function
	int num = 0; // variable declaration
	int result = 0; // variable declaration

	cout << "Enter a number "; // prompt
	cin >> num; // input

	result = sum(num); // function call
	cout << "\n"<<result; // output

	return 0; // program termination
}

int sum(int num) { // function definition
	if (num > 0) { // if num is greater than 0
		cout<<endl<<num; // print num
		return (num + sum(num - 1)); // Recursive case: add num with the sum of num - 1
	} else { // Base case: sum of 0 is 0
		return 0; // return 0
	} // end of if statement
} // end of function definition