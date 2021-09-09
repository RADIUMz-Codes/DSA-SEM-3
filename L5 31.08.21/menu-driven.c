#include <stdio.h>
#include <stdlib.h>

void countNonZero(int **arr,int n){
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=0)
            {
                c++;
            }
        }
    }
    printf("Total non zero elements = %d",c);
}
void diagonalProduct(int **arr,int n){
    int prod=1;
    for(int i=0;i<n;i++){
        prod*=arr[i][i];
    }
    printf("Product = %d",prod);
}
void print(int** arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;i++){
            printf(" ");
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
}

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
    printf("    MENU\n");
    printf("1) Find the number of nonzero elements in A\n");
    printf("2) Display the elements below the minor diagonal.\n");
    printf("3) Find the product of the diagonal elements.\n");
    int ch;
    printf("Enter choice : ");
    scanf("%d",&ch);


    switch (ch)
    {
    case 1:countNonZero(arr,n);
            break;
    case 2:print(arr,n);
        break;
    case 3:diagonalProduct(arr,n);
        break;
    default:
        printf("Choice not available");
        break;
    }
}