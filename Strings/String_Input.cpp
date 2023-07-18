#include <iostream> // for cout and cin
#include <string>   // for string class

int main()
{
    std::string name; // define a string variable
    std::cout << std::endl
              << "Enter your name: ";
    std::getline(std::cin, name); // get the first name

    std::cout << "Your name is: " << name << std::endl; // print full name using the normal way of concatenation.

    return 0;
}       