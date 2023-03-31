#include<iostream> // this is the header file
using namespace std; // this is the namespace

int main() // this is the main function
{
    double lenght=0,breadth=0; // this is the variable declaration
    double area=0, preimeter=0 ; // this is the variable declaration

    cout<<"Please enter the length: "<<endl; // this is the output
    cin>>lenght; // this is the input

 cout<<"Please enter the breadth: "<<endl;  // this is the output
    cin>>breadth; // this is the input
    
    area = lenght*breadth; // this is the calculation
    cout<<"Area : "<< area <<endl; // this is the output

    preimeter=2*(lenght+breadth); // this is the calculation
    cout<<"Preimter : "<<preimeter<<endl; // this is the output
    return 0; // this is the return statement
}// this is the end of the program