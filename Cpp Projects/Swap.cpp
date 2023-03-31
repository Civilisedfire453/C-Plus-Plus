#include<iostream>
using namespace std;

int main()
{
    int var1=10,var2=20;
    //swap 
    /*
    var 1 = var 2 will not work as we 
    are overwite the original values  
    */
    int temp1 = 0;

   temp1=var1;
   var1=var2;
   var2=temp1;
cout<< var1   <<  var2 <<endl;
    return 0;
}