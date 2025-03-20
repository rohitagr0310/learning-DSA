#include <iostream>
using namespace std;

int main()
{
    int arr[] = {33, 76, 80, 36, 64, 74, 87, 40, 91, 32, 89, 16, 11, 72, 59};
    int size = sizeof(arr) / sizeof(int);

    int largest = INT_MIN;
    int largest_index = -1;
    int smallest = INT_MAX;
    int smallest_index = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }

        if (arr[i] < smallest)
        {
            smallest = min(arr[i], smallest);
            smallest_index = i;
        }
    }

    cout << "Smallest element = " << smallest << " At Index = " << smallest_index << endl;
    cout << "largest element = " << largest << " At Index = " << largest_index << endl;

    return 0;
}