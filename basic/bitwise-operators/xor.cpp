#include <iostream>
using namespace std;

int main()
{
    int a = 5;     // 101
    int b = 3;     // 011
    int c = a ^ b; // 110

    cout << c << endl; // 6

    return 0;
}
// Output
// 6
// Explanation
// The bitwise XOR operator (^) compares each bit of the first operand to the corresponding bit of the second operand.
// If the bits are different, the resulting bit is set to 1. Otherwise, it is set to 0. In this case, the binary representation of 5 is 101,
// and the binary representation of 3 is 011. Performing a bitwise XOR operation on these two numbers results in 110, which is equal to 6 in decimal.
// The XOR operator can be used to toggle specific bits in a number, as it will flip the bits that are different between the two operands.