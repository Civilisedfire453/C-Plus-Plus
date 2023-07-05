#include <iostream>
using namespace std;
int main()
{
    int temp1 = 10;
    const int temp2 = 20;
    temp1 = 30;
    // temp2=30;
    cout << temp2 << endl;
    cout << temp1 << endl;
    return 0;
}