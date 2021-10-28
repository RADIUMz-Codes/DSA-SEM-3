#include <stdio.h>
#include <limits.h>
int main() {
    int m=4,n=5, arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
            arr[i][j]=i+j+5;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    int max= INT_MIN,min= INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max)
                max=arr[i][j];
            if(arr[i][j]<min)
                min=arr[i][j];
        }
    }
    printf("Max = %d \nMin = %d",max,min);

    return 0;
}