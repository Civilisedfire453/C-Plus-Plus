#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, replaceWord, replacementWord = ""; // declare variables
    cout << endl << "Enter a string: "; // ask the user to enter a string
    getline(cin, string1); // store the string in the variable

    cout << endl << "What word do you want to replace? "; // ask the user to enter a word to replace
    getline(cin, replaceWord); // store the word in the variable

    cout << endl << "What is the replacement word? "; // ask the user to enter a replacement word
    getline(cin, replacementWord); // store the replacement word in the variable

    string1.replace(string1.find(replaceWord), replaceWord.length(), replacementWord); // replace the word with the replacement word
    cout << endl << "The string after replacing '" << replaceWord << "' with '" << replacementWord << "': " << string1 << endl; // print the string after replacing the word with the replacement word

}
