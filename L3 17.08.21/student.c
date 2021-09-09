/*
    create a student record having name and roll number as structure elements , take user input and display the result.
*/
#include <stdio.h>
struct class{
    int roll;
    char name[20];
};
int main() {
    struct class student[3];
    for(int i=0;i<3;i++){
        printf("\nEnter roll and name %d\n",i+1);
        scanf("%d",&student[i].roll);
        getchar();
        gets(student[i].name);
    }
    for(int i=0;i<3;i++){
        printf("\n%d\n",student[i].roll);
        printf(student[i].name);
        printf("\n");
    }
}