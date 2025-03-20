#include <iostream>
using namespace std;

void double_arr_elements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = {33, 76, 80, 36, 64, 74, 87, 40, 91, 32, 89, 16, 11, 72, 59};
    int size = sizeof(arr) / sizeof(int);

    cout << "Old Elements = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    double_arr_elements(arr, size);

    cout << "\nNew Elements = ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}