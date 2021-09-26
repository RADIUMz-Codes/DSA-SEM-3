#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    char data;
    struct stack *next;

} stack;

stack *s = NULL;

void push(char);
void display();

int main()
{
    char str[20];
    scanf("%s", &str);
    int i = 0;
    while (str[i] != '\0')
    {
        push(str[i++]);
    }
    display();
}

void push(char d)
{
    stack *n = (stack *)malloc(sizeof(stack));
    n->data = d;
    if (s == NULL)
    {
        n->next = NULL;
        s = n;
    }
    else
    {
        n->next = s;
        s = n;
    }
}

void display()
{
    if (s == NULL)
        printf("\nStack is Empty!!!");
    else
    {
        stack *temp = s;
        while (temp != NULL)
        {
            printf("%c", temp->data);
            temp = temp->next;
        }
    }
}