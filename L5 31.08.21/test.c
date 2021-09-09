#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int **arr=(int **)malloc(n *sizeof(int*));
    printf("Enter elements of the array\n");
    for(int i=0;i<n;i++){
        arr[i]=(int *)malloc(n*sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            s+=arr[i][j];
        }
    }
    printf("Sum = %d",s);
    
}