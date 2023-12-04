#include <stdio.h>

void marge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int x[n1], y[n2];
    for (int i = 0; i < n1; i++)
    {
        x[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++)
    {
        y[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (x[i] < y[j])
        {
            arr[k] = x[i];
            i++;
        }
        else
        {
            arr[k] = y[j];
            j++;
        }
        k++;
    }
    for (int i = 0; i < k + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int a[10] = {4, 5, 10, 12, 6, 8, 11, 15};
    int n = 8;
    int l = 0, h = n - 1;
    int m = (l + h) / 2;

    marge(a, l, m, h);

    return 0;
}