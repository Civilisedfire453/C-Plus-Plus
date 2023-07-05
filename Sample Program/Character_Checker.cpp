// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  // Check if the character is lowercase
  if (islower(ch))
  {
    cout << "The character " << ch << " is lowercase." << endl;
  }
  else
  {
    // Check if the character is uppercase
    if (isupper(ch))
    {
      cout << "The character " << ch << " is uppercase." << endl;
    }
    else
    {
      cout << "The character " << ch << " is not a letter." << endl;
    }
  }

  return 0;
}