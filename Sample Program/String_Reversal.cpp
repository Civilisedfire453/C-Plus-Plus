#include <iostream> // This is the header file for input and output
#include <string>   // This is the header file for string

int main()
{

    std::string str1 = "";
    std::cout << "Enter the string: ";
    std::getline(std::cin, str1);

    std::cout << std::endl;
    for (int i = str1.length(); i >= 0; i--)
    {
        std::cout << str1[i];
    };

    return 0;
}