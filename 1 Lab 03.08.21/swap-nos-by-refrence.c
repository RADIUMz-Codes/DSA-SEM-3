#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void swapv(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("A = %d & B = %d\n", a, b);
}
int main()
{
    int a, b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    swapv(a, b);
    swap(&a, &b);
    printf("A = %d & B = %d\n", a, b);

    return 0;
}