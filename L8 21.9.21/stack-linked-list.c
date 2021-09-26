#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;

} stack;

void push(int);
void pop();
void display();
void isEmpty();
stack *s = NULL;

int main()
{
    int value, choice;
    while (1)
    {
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. isEmpty\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            return 0;
        default:
            printf("\nWrong selection!!! Try again!!!");
        }
    }
}

void push(int d)
{
    stack *n = (stack *)malloc(sizeof(stack));
    n->data = d;
    if (s == NULL)
    {
        n->next=NULL;
        s = n;

    }
    else
    {
        n->next = s;
        s = n;
    }
    printf("\nInsertion success!!!");
}

void pop()
{
    if (s == NULL)
    {
        printf("\nUnderflow!!!");
    }
    else{
        printf("\nDeleted : %d", s->data);
        stack*temp= s;
        s=s->next;
        free(temp);
    }
}

void display(){
    if(s==NULL)
        printf("\nStack is Empty!!!");
    else{
        stack *temp =s;
        printf("\nStack elements are:\n");
        while(temp->next!=NULL){
            printf("%d\n", temp->data);
            temp=temp->next;
        }
        printf("%d\n", temp->data);
    }
}

void isEmpty(){
    if(s==NULL){
        printf("\nStack is Empty!!!");
    }
    else{
        printf("\nStack is not Empty!!!");
    }
}