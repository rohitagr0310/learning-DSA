#include <iostream>
using namespace std;

int main()
{
    int arr[] = {33, 76, 80, 36, 64, 74, 87, 40, 91, 32, 89, 16, 11, 72, 59};
    int size = sizeof(arr) / sizeof(int);

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        largest = max(arr[i], largest);
        smallest = min(arr[i], smallest);
    }

    cout << "Smallest element = " << smallest << endl;
    cout << "largest element = " << largest << endl;

    return 0;
}