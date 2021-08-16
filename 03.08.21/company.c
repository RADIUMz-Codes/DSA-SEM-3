#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define endl printf("\n")

struct Company
{
    char name[50];
    char address[100];
    char phone[10];
    char noOfEmployee[6];
} C[3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Company # %d\n", i + 1);
        printf("Enter Name :");
        gets(C[i].name);
        printf("Enter Address :");
        gets(C[i].address);
        printf("Enter Phone: ");
        gets(C[i].phone);
        printf("Enter Number of Empleyee : ");
        gets(C[i].noOfEmployee);
        endl;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Company # %d\n", i + 1);
        printf("Name :");
        printf(C[i].name);
        endl;
        printf("Address :");
        printf(C[i].address);
        endl;
        printf("Phone: ");
        printf(C[i].phone);
        endl;
        printf("Number of Empleyee : ");
        printf(C[i].noOfEmployee);
        endl;
        endl;
    }
    return 0;
}