#include <iostream>
using namespace std;

int main()
{
    int a = 5;         // 101
    int b = 3;         // 011
    int c = a >> b;    // 0
    cout << c << endl; // 0
    return 0;
}