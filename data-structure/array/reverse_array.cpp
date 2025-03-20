#include <iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {33, 76, 80, 36, 64};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before Reversal = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse_array(arr, size);

    cout << "After Reversal = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}