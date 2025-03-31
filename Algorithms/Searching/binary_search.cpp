#include <iostream>
using namespace std;

void sort_array(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary_search(int arr[], int size, int target)
{

    int start = 0, end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    int target;
    cout << "Enter the Target :- ";
    cin >> target;

    sort_array(arr, size);

    cout << "Sorted array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int index = binary_search(arr, size, target);

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