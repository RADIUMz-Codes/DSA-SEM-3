#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

node *head = NULL;
// node *front = NULL;
node *back;

void create();
void addRight();
void addLeft();
void deleteRight();
// TODO: functions below
void deleteLeft();
void viewRight();
void viewLeft();
void display();
void isEmpty();

int main()
{
    printf("***MENU***\n");
    printf("1. Create\n");
    printf("2. Add From Right\n");
    printf("3. Add From Left\n");
    printf("4. Delete From Right\n");
    printf("5. Delete From Left\n");
    printf("6. Peek Right\n");
    printf("7. Peek Left\n");
    printf("8. Display\n");
    printf("9. isEmpty\n");
    printf("10. -1 to exit\n");
    int ch;
    printf("Enter choice \n");
    scanf("%d", &ch);
    while (ch != -1)
    {
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            addRight();
            break;
        case 3:
            addLeft();
            break;
        case 4:
            deleteRight();
            break;
        case 5:
            deleteLeft();
            break;
        case 6:
            viewRight();
            break;
        case 7:
            viewLeft();
            break;
        case 8:
            display();
            break;
        case 9:
            isEmpty();
            break;
        default:
            break;
        }

        printf("Enter choice \n");
        scanf("%d", &ch);
    }
    return 0;
}

void create()
{
    int d;
    printf("Enter numbers , -1 to end : ");
    scanf("%d", &d);

    while (d != -1)
    {
        node *n = (node *)malloc(sizeof(node));
        n->data = d;
        n->next = NULL;
        if (head == NULL)
        {
            n->prev = NULL;
            head = n;
            back = n;
        }
        else
        {
            node *t = back;
            n->prev = t;
            back->next = n;
            back = back->next;
        }
        printf("Enter numbers , -1 to end : ");
        scanf("%d", &d);
    }
    printf("DeQueue Created\n");
}

void display()
{
    node *t = head;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

void addRight()
{
    int d;
    printf("Enter number :");
    scanf("%d", &d);

    node *n = (node *)malloc(sizeof(node));
    n->data = d;
    n->next = NULL;
    if (head == NULL)
    {
        n->prev = NULL;
        head = n;
        back = n;
    }
    else
    {
        node *t = back;
        n->prev = t;
        back->next = n;
        back = back->next;
    }
    printf("Element Added\n");
}

void addLeft()
{
    int d;
    printf("Enter number :");
    scanf("%d", &d);
    node *n = (node *)malloc(sizeof(node));
    n->data = d;
    n->prev = NULL;
    n->next = head;

    head->prev = n;
    head = head->prev;
    printf("Element Added\n");
}

void deleteRight()
{
    if (head == NULL)
    {
        printf("Dqueue is Empty\n");
    }
    else
    {
        node *t = back;
        back = back->prev;
        back->next = NULL;
        free(t);
        printf("Element Deleted\n");
    }
}

void deleteLeft()
{
    if (head == NULL)
    {
        printf("Dqueue is Empty\n");
    }
    else{
        node *t =head;
        head = head->next;
        head->prev =NULL;
        free(t);
    }
}

void viewRight(){
    if (head == NULL)
    {
        printf("Dqueue is Empty\n");
    }
    else {
        printf("%d\n",back->prev);
    }
}

void viewLeft(){
    if (head == NULL)
    {
        printf("Dqueue is Empty\n");
    }
    else{
        printf("%d\n",head->data);
    }
}

void isEmpty(){
    if (head == NULL)
    {
        printf("Dqueue is Empty\n");
    }
    else
    {
        printf("Dqueue is not Empty\n");
    }
}