#include <stdio.h>

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int temp[30];
    int m = mid+1, i = s;
    int idx = s;
    while (i <= mid && m <= e)
    {
        if (arr[i] <= arr[m])
        {
            temp[idx++] = arr[i];
            i++;
        }
        else
        {
            temp[idx++] = arr[m];
            m++;
        }
    }
    while (i <= mid)
    {
        temp[idx++] = arr[i++];
    }
    while (m <= e)
    {
        temp[idx++] = arr[m++];
    }

    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void merge_sort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    if(s>=e){
        return;
    }
    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[5];
    printf("Enter 5 numbers\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}