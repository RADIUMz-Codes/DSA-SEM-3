#include <stdio.h>

#define SIZE 20
#define MAX 50
int stack[SIZE], top =-1;
int queue[MAX], front = -1, rear =0;

void qinsert(int);
void sinsert(int);
void qreverse();
void display();
int pop();

int main(){
    int t =5;
    printf("Enter 5 values\n");
    while(t--){
        int d;
        scanf("%d",&d);
        qinsert(d);
    }
    qreverse();
    display();
}

void qinsert(int d){
        if(front == -1) front =0;

        queue[rear++] = d;
}

void sinsert(int value)
{
    if (top == SIZE - 1)
        printf("\nOverflow!!!");
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop()
{ 
    return stack[top--]; 
}

void qreverse(){
    for(front;front<=rear;front++){
        sinsert(queue[front]);
    }

    while(top!=-1){
        qinsert(pop());
    }
}

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i < rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}