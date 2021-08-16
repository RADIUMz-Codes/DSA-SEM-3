/*
    4. WAP to read RollNo, Name, Address, Age & average-marks of 5 students in the class and display the details from function 
    using structure and dynamic memory allocation.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct class
{
    int roll;
    char name[50];
    char address[50];
    int age;
    int average;
};

int main(void)
{
    struct class student;
    struct class *ptr;
    ptr = (struct class *)malloc(5 * sizeof(struct class));
    for (int i = 0; i < 5; i++)
    {

        printf("\nDetails for student %d\n", i + 1);
        
        printf("Enter Roll: ");
        scanf("%d", &(ptr + i)->roll);
        getchar();
        printf("Enter Name: ");
        gets((ptr + i)->name);
        printf("Enter address: ");
        gets((ptr + i)->address);
        printf("Enter age: ");
        scanf("%d", &(ptr + i)->age);
        printf("Enter average: ");
        scanf("%d", &(ptr + i)->average);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Roll: %d\n", (ptr + i)->roll);
            printf("\nName: %s\n", (ptr + i)->name);
            printf("Address: \n", (ptr + i)->address);
            printf("Age: %d\n", (ptr + i)->age);
            printf("Average: %d\n\n", (ptr + i)->average);
            }
    return 0;
}
