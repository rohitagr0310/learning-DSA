#include <iostream>
using namespace std;

int main()
{
    int a = 5;         // 101
    int b = 3;         // 011
    int c = a << b;    // 101000
    cout << c << endl; // 40
    return 0;
}