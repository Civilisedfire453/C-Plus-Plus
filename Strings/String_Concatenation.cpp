#include <iostream> // for cout and cin
#include <string>   // for string class

int main()
{
    std::string first_name, last_name;
    std::cout << std::endl << "Enter your first name: ";
    std::cin >> first_name;
    std::cout << std::endl << "Enter your last name: ";
    std::cin >> last_name;

    std::string full_name = first_name + " " + last_name;
    std::cout << std::endl<< "Using standard way\n Your full name is: " << full_name << std::endl; // print full name using the normal way of concatenation.

    std::string full_name2 = first_name.append(" ").append(last_name); // append function is used to concatenate strings.
    std::cout << std::endl << "Using append \n Your full name is: " << full_name2 << std::endl; // print full name using the append function.
    return 0;
}