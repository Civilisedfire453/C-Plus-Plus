#include <iostream> // for cout and cin
#include <string>   // for string class.

int main()
{

    std::string string1, string2 = " "; // define two string variables.
    std::cout << "Enter a string: ";
    std::getline(std::cin, string1); // get the first string.

    std::cout << "Enter another string: ";
    std::getline(std::cin, string2); // get the second string.

    if (string1.compare(string2) == 0)
    {
        std::cout << "The strings are the same ." << std::endl;
    }
    else
    {
        std::cout << "The strings are not the same ." << std::endl;
    }

    return 0;
