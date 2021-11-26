#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int arr[5];
    printf("Enter 5 numbers\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    int i, k, j;
    for (i = 1; i < 5; i++)
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }

    for(int i =0;i<5;i++) printf("%d ",arr[i]);
}