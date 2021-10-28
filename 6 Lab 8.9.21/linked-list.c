#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;

node *create(node *);
void display(node *);
node *insert_beg(node *);
node *insert_end(node *);
node *insert_anyloc(node *);
node *delt_beg(node *);
node *delt_end(node *);
node *delt_anyloc(node *);
int main()
{

    int choice = 0;

    printf("Singly Linked List All Operations\n");
    while (choice < 9)
    {

        printf("\nChoice\n");
        printf("1 : Create a Linked List \n");
        printf("2 : Insert at beginning into Linked List \n");
        printf("3 : Insert at end of the Linked List \n");
        printf("4 : Insert at any location of the Linked List\n");
        printf("5 : Delete at beginning into Linked List \n");
        printf("6 : Delete at end of the Linked List \n");
        printf("7 : Delete at any location of the Linked List\n");
        printf("8 : Display Linked List \n");
        printf("Others : Exit()\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = create(head);
            printf("Linked list created.....");
            break;
        case 2:
            head = insert_beg(head);
            break;
        case 3:
            head = insert_end(head);
            break;
        case 4:
            head = insert_anyloc(head);
            break;
        case 5:
            head = delt_beg(head);
            break;
        case 6:
            head = delt_end(head);
            break;
        case 7:
            head = delt_anyloc(head);
            break;
        case 8:
            display(head);
            break;
        default:
            break;
        }
    }
    return 0;
}

node *create(node *head)
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

            head = n;
        }

        else
        {
            node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = n;
        }
        printf("Enter numbers , -1 to end : ");
        scanf("%d", &d);
    }
    return head;
}

void display(node *head)
{
    node *t = head;
    while (t != NULL)
    {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("\n");
}

node *insert_beg(node *head)
{
    node *n = (node *)malloc(sizeof(node));
    int d;
    printf("Input data : ");
    scanf("%d", &d);
    n->data = d;
    n->next = head;
    head = n;
    return head;
}

node *insert_end(node *head)
{
    node *n = (node *)malloc(sizeof(node));
    int d;
    printf("Input data : ");
    scanf("%d", &d);
    n->data = d;
    n->next = NULL;
    node *t = head;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = n;
    return head;
}

node *insert_anyloc(node *head)
{
    node *n = (node *)malloc(sizeof(node));
    int d;
    printf("Input data : ");
    scanf("%d", &d);
    n->data = d;
    n->next = NULL;
    node *curr, *t;
    curr = head;
    while (curr->data == d)
    {
        t = curr->next;
        curr->next = n;
        n->next = t;
    }
    return head;
}

node *delt_beg(node *head)
{
    node *t = head;
    head = (head)->next;
    free(t);
    return head;
}

node *delt_end(node *head)
{
    node *t, *p;
    t = head;
    while (t->next != NULL)
    {
        p = t;
        t = t->next;
    }
    p->next = NULL;
    free(t);
    return head;
}

node *delt_anyloc(node *head)
{
    int d;
    printf("Enter data to be deleted: ");
    scanf("%d", &d);
    node *t, *p;
    t = head;
    while (t->data != d)
    {
        p = t;
        t = t->next;
    }
    p->next = t->next;
    free(t);
    return head;
}