#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n;
    printf("Search a number : ");
    scanf("%d", &n);
    int s = 0, e = 4;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (n == arr[mid])
        {
            printf("%d is present at index %d", n, mid);
            break;
        }
        else if (n < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (s > e)
    {
        printf("Element not Found");
    }
}
