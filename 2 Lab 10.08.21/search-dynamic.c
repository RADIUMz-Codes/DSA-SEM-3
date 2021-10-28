/*
    3. WAP to search an element in a dynamic array of n numbers.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int *ptr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<5;i++){
        printf("%d ",ptr[i]);
    }
    int n;
    printf("\nEnter No to be Searched: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(ptr[i]== n){
            printf("Element Found");
            return 0;
        }
    }  
    printf("Element Not Found");
    return 0;
}