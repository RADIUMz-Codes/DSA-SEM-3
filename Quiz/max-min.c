#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[6] = {8, 3, 2, 9, 10, 1};

    int i, j, n = 6;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1])
            {
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
    int mn = __INT_MAX__;
    int mx = arr[n-1] - arr[0];
    for(int i=0; i<n-1; i++){
        int curr = arr[i+1] - arr[i];
        if(curr<mn){
            mn= curr;
        }
    }
    printf("Max = %d\n",mx);
    printf("Min = %d", mn);
}