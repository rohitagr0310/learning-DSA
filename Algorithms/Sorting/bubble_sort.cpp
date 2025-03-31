#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size)
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

int main()
{
    int arr[] = {37, 82, 14, 59, 3, 91, 46, 23, 68, 75,
                 19, 52, 88, 7, 31, 64, 42, 96, 11, 27,
                 83, 55, 29, 70, 8, 39, 61, 17, 94, 43,
                 76, 5, 22, 48, 84, 33, 69, 13, 57, 92,
                 26, 71, 38, 65, 9, 50, 81, 16, 44, 78};

    int size = sizeof(arr) / sizeof(int);

    bubble_sort(arr, size);

    cout << "Size of the Array :- " << size << endl;
    cout << "Sorted array :- ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}