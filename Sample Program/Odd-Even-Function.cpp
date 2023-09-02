#include <iostream> // for cin and cout

using namespace std; // for cin and cout

void oddEven(int num) { // function to check if a number is odd or even
	if (num % 2 == 0) // if the remainder of the number divided by 2 is 0, then it is even
		cout << num << " is even." << endl; // print the number and that it is even
	else // if the remainder of the number divided by 2 is not 0, then it is odd
		cout << num << " is odd." << endl; // print the number and that it is odd
}

int main() { // main function

	int num; // variable to store the number

	cout << "Enter a number: "; // ask the user to enter a number

	cin >> num; // store the number entered by the user in the variable num

	oddEven(num); // call the function oddEven and pass the number entered by the user as an argument

	return 0; // return 0 to the operating system to indicate that the program ended successfully
} // end of main function