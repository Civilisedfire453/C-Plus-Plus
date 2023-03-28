#include <iostream>
using namespace std;
int main()
{
    //intial declaration of variables
    int num1 =0, num2=0;
    double sum = 0;
    sum = num1 + num2;

    //output to console and getting user input
    cout<<"Enter a number: "<<endl;
    cin>> num1;

    cout<<"Enter a number"<<endl;
    cin>> num2;

    cout<<"The total of your number's is "<< num1 <<"+" << num2 << " equals " <<sum <<endl;

    return 0;
}
