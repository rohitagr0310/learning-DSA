#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, n = 5, ele = 4;
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            printf("found at %d", mid + 1);
            break;
        }
        else if (arr[mid] > ele)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (low > high)
    {
        printf("not found");
    }
}
