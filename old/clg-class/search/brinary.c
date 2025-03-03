#include <stdio.h>

int binary_search(int arr[], int element, int high, int low)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int element;

    printf("Element to search: ");
    scanf("%d", &element);

    int low = 0, high = n - 1;
    int result = binary_search(arr, element, high, low);

    if (result == -1)
    {
        printf("Element not found ");
    }
    else
    {
        printf("Element is present at index %d ", result);
    }

    return 0;
}
