#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
    return 0;
}