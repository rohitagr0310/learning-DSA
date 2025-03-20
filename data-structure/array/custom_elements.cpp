#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array of size " << n << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}