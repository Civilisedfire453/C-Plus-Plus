#include<iostream>
using namespace std;

int main()
{
    double lenght=0,breadth=0;
    double area=0, preimeter=0 ;

    cout<<"Please enter the length: "<<endl;
    cin>>lenght;

 cout<<"Please enter the breadth: "<<endl;
    cin>>breadth;
    
    area = lenght*breadth;
    cout<<"Area : "<< area <<endl;

    preimeter=2*(lenght+breadth);
    cout<<"Preimter : "<<preimeter<<endl;
    return 0;
}