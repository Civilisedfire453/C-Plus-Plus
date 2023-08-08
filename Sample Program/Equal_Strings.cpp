//
// Created by vedlo on 8/08/2023.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2 = " ";
    cout << "Enter a string: ";
    getline(cin, s1);

    cout << "Enter another string: ";
    getline(cin, s2);

    if (0 == s1.compare(s2)) {
        cout << "The strings are the same." << endl;
    } else {
        cout << "The strings are not the same." << endl;
    }

    return 0;
}
