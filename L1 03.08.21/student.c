#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define endl    printf("\n")

struct class{
    int roll;
    char name[50];
    char address[50];
    int age;
    int average;
};

int main(void) {
    struct class student[5];
    struct class *ptr;
    ptr = student;
    for(int i=0;i<5;i++,ptr++){
        
        printf("Details for student %d",i+1);endl;
        printf("Enter Roll: ");
        scanf("%d",&ptr->roll);
        printf("Enter Name: ");
        gets(ptr->name);
        printf("Enter address: ");
        gets(ptr->address);
        printf("Enter age: ");
        scanf("%d",&ptr->age);
        printf("Enter average: ");
        scanf("%d",&ptr->average);
    }
    ptr=student;
    for(int i=0;i<5;i++,ptr++)
    {
        printf("Roll: %d",ptr->roll);endl;
        printf("Name: %s",ptr->name);endl;
        printf("Address: ",ptr->address);endl;
        printf("Age: %d",ptr->age);endl;
        printf("Average: %d",ptr->average);endl;endl;
    }
    return 0;
}