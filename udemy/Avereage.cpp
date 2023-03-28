#include<iostream>
using namespace std;

int main()
{
    int num1=0, num2=0,num3=0,num4=0;
    double average=0 , total=0;

    cout<< "Enter four numbers: "<<endl;

    cin>> num1>>num2>>num3>>num4;


    //calc

    total = num1+ num2+ num3 + num4;
    average= total/4;

    cout<<"Total is :" << total <<", Average is: "  <<average;  
    
    return 0;
} 