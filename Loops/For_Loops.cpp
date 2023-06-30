#include <iostream>

// main function
int main(){
    int a = 0;

    std::cout<<"Please enter a number: ";
    std::cin>>a;

    // for loop
    for(int i = 1; i <= 20; i++){
        std::cout << std::endl << a << " x " << i << " = " << a * i;
    }
return 0;    
}
