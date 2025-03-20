#include <iostream>

using namespace std;

int main()
{
    // Declaration
    int arr1[5];                  // Uninitialized array of size 5
    int arr2[] = {1, 2, 3, 4, 5}; // Initialized array (size inferred)
    int arr3[5] = {1, 2};         // Partially initialized (remaining elements = 0)

    // Accessing Elements
    cout << arr2[2] << endl; // Output: 3

    return 0;
}
