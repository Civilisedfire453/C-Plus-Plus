#include <iostream>
#include <string>

#include <iostream>
#include <string>

int main()
{
    std::string str1 = "";
    

    std::cout << "Enter the string: ";
    std::getline(std::cin, str1);

    for (int i = 0; i <= str1.size(); i++)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
        {
            str1[i] = ' ';
        }
    };

    std::cout << std::endl
              << str1;
    return 0;
}
