#include <iostream>
using namespace std;

int main()
{
    int a = 5;     // 101
    int b = 3;     // 011
    int c = a | b; // 111

    cout << c << endl; // 7

    return 0;
}

// Output
// 7
// Explanation
// The bitwise OR operator (|) compares each bit of the first operand to the corresponding bit of the second operand.
// If either bit is 1, the resulting bit is set to 1. Otherwise, it is set to 0. In this case, the binary representation of 5 is 101,
// and the binary representation of 3 is 011. Performing a bitwise OR operation on these two numbers results in 111, which is equal to 7 in decimal.