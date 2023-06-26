#include <iostream>
// header file for input output functions
using namespace std;

// main function -
int main(){
    int marks = 0; // integer variable to store marks
    cout << "Enter your marks: "; // display message
    cin >> marks; // input marks

    if (marks >=60 && marks <=100) // check condition
    {
        cout<<"You have passed the exam."<<endl;
    } // if marks is greater than or equal to 60
    else
    {
        cout<<"You have failed the exam."<<endl;
    } // if marks is less than 60
    return 0;   
}