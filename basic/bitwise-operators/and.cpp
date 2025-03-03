#include <iostream>
using namespace std;

int main()
{
    int a = 5;     // 101
    int b = 3;     // 011
    int c = a & b; // 001

    cout << c << endl; // 1

    return 0;
}

// Output
// 1
// Explanation
// The bitwise AND operator (&) compares each bit of the first operand to the corresponding bit of the second operand.
// If both bits are 1, the resulting bit is set to 1. Otherwise, it is set to 0. In this case, the binary representation of 5 is 101,
// and the binary representation of 3 is 011. Performing a bitwise AND operation on these two numbers results in 001, which is equal to 1 in decimal.