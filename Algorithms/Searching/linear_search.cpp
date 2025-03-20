#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // FOUND
        }
    }
    return -1; // NOT FOUND
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    int target;
    cout << "Enter you Target = ";
    cin >> target;

    int index = linear_search(arr, size, target);

    if (index == -1)
    {
        cout << "Element not found" << endl;
    }

    else
    {
        cout << "Element Found at Position = " << index << endl;
    }

    return 0;
}