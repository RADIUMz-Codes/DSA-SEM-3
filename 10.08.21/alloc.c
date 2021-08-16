/*
    1. Wap to create an array dynamically using malloc and calloc and display the result. Reallocate the array (increase and decrease it's size ) using realloc then display the elements. Then free the memory assigned to array and print the array content..
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter the size for dynamic array using malloc: ");
    scanf("%d", &n);
    int *mptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        mptr[i] = i + 1;
    }
    for (int i = 0; i < n; ++i)
    {
        printf("%d, ", mptr[i]);
    }printf("\n");

    printf("Enter the size for dynamic array using calloc: ");
    scanf("%d", &m);
    int *cptr = (int *)calloc(m,sizeof(int));
    for (int i = 0; i < m; ++i)
    {
        cptr[i] = i + 1;
    }
    for (int i = 0; i < m; ++i)
    {
        printf("%d, ", cptr[i]);
    }printf("\n");

    free(mptr);
    printf("Memory Freed equals\n");

    cptr = realloc(cptr, 5 * sizeof(int));
    for (int i = 0; i < 5; ++i)
    {
        printf("%d, ", cptr[i]);
    }
}

