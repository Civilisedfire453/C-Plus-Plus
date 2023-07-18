#include <iostream> // for cout and cin
#include <string>   // for string class

int main()
{
    std::string name, email, phone;
    std::cout << std::endl
              << "Enter your name: ";
    std::getline(std::cin, name); // get the first name

    std::cout << std::endl
              << "Enter your email: ";
    std::cin >> email; // get the email
    std::cout << std::endl
              << "Enter your phone number: ";
    std::cin >> phone; // get the phone number

    std::cout << "Your name is: " << name << "."
              << "\nYour email is: " << email << "."
              << "\nYour phone number is: " << phone << "." << std::endl; // print all info using the normal way of concatenation.

    return 0;
}
