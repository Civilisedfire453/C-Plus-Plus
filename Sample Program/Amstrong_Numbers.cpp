//
// Created by vedlo on 2/09/2023.
//

#include <iostream> // for cin and cout

#include <cmath> // for pow function

using namespace std; // for cin and cout

void ArmstrongNum() { // function to check if a number is an Armstrong number

	int sum, temp, num, rem, numDigits = 0; // declare variables

	cout << "Enter a number: "; // ask the user to enter a number
	cin >> num; // store the number entered by the user in the variable num


	temp = num; // store the number in a temporary variable

	while (temp != 0) { // count the number of digits in the number
		temp = temp / 10; // divide the number by 10
		numDigits++; // increment the number of digits
	} // end of while loop


	temp = num; // store the number in a temporary variable

	while (temp != 0) {
		rem = temp % 10; // get the last digit of the number
		sum = sum + pow(rem, numDigits); // add the cube of the digit to the sum
		temp = temp / 10; // divide the number by 10

	}

	if (sum != num) // if the sum of the cubes of the digits is equal to the number
		cout << num <<" is not an Armstrong number." << endl; // print that the number is an Armstrong number
	else // if the sum of the cubes of the digits is not equal to the number
		cout << num <<  " is an Armstrong number." << endl; // print that the number is not an Armstrong number

} // end of ArmstrongNum function


int main() {

	ArmstrongNum(); // call the function ArmstrongNum

	return 0; // return 0 to the operating system to indicate that the program ended successfully
}

