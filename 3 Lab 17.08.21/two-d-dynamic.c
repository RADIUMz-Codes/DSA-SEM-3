#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int m,n;
    printf("Enter no of rows and columns: ");
    scanf("%d%d",&m,&n);
    int **ptr =(int**)malloc(m*sizeof(int**));
    for(int i=0;i<m;i++){
        ptr[i]=(int *)malloc(n*sizeof(int *));
        for(int j=0; j<n; j++){
            scanf("%d",&ptr[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ptr[i][j]);
        }printf("\n");
    }
    return 0;
}