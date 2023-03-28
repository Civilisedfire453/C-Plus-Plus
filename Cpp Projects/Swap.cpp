#include<iostream> // This is the header file for input and output
using namespace std; // This is the standard namespace

int main() // This is the main function
{
    int var1=10,var2=20; // Declartion of two variables

    //swaping the values of var1 and var2 
  
    /*
    var 1 = var 2 will not work as we 
    are overwite the original values  
    */
    int temp1 = 0; // Declartion of temp variable

   temp1=var1; // storing the value of var1 in temp1
   var1=var2; // storing the value of var2 in var1
   var2=temp1; // storing the value of temp1 in var2

    
    cout<< var1   <<  var2 <<endl; // using cout to print the sum of two numbers
    return 0;
}// end of program