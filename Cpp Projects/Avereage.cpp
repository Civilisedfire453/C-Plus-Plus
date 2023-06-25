#include <iostream> // this is the header file
using namespace std; // this is the namespace

int main()  // this is the main ` 
{
    int num1=0, num2=0,num3=0,num4=0; // this is the variable declaration
    double average=0 , total=0;

    cout<< "Enter four numbers: "<<endl; // this is the output

    cin>> num1>>num2>>num3>>num4;   // this is the input


    total = num1+ num2+ num3 + num4; // this is the calculation
    average= total/4; // this is the calculation

    cout<<"Total is :" << total <<", Average is: "  <<average; // this is the output  
    
    return 0; // this is the return statement
} // this is the end of the program