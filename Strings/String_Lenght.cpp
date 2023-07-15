#include <iostream> // for cout and cin
#include <string>   // for string class
int main()
{
    std::string random_word;                   // declare a string variable.
    std::cout << "Enter your a random word: "; // ask the user to enter a random word.
    std::cin >> random_word;                   // store the word in the variable.

    std::cout << "The lenght of the word is: " << random_word.length() << std::endl; // print the lenght of the word.
    std::cout << "The size of the word is: " << random_word.size() << std::endl;     // print the size of the word.

    return 0; // return 0 to the operating system.
}