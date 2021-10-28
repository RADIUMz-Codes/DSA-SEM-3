#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int coeff;
	int pow;
	struct Node* next;
};

struct Node* readPolynomial(struct Node *poly,int x)
{
	int c,e;
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	poly = temp;
//	printf("\n Enter highest power");
//	scanf("%d",&m);
	printf("\n Coeffecient: ");
	scanf("%d", &c);
	printf("\n Exponent: ");
	scanf("%d", &e);
	temp->coeff = c;
	temp->pow = e;
	temp-> next = NULL;
	for(int i=x;i>=1;i--)
	{
    	struct Node* n = (struct Node*)malloc(sizeof(struct Node));
		printf("\n Coeffecient: ");
	    scanf("%d", &c);
     	printf("\n Exponent: ");
    	scanf("%d", &e);
    	n->coeff = c;
    	n->pow = e;
    	n-> next = NULL;
		temp->next=n;
		temp=temp->next;
	
	}
	return poly;
		
}
void displayPolynomial(struct Node* poly)
{
	printf("\nPolynomial expression is: ");
	while(poly != NULL)
	{
		printf("%dX^%d", poly->coeff, poly->pow);
		poly = poly->next;
		if(poly != NULL)
			printf("+");
	}
//	return poly;
}

struct Node* addPolynomials(struct Node* result, struct Node* first, struct Node* second)
{
 	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
 	temp->next = NULL;
 	result = temp;
 	while(first && second)
 	{
 		if(first->pow > second->pow)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}
 		else if(first->pow < second->pow)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 		else
 		{
 			temp->coeff = first->coeff + second->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 			second = second->next;
 		}

 		if(first && second)
 		{
 			temp->next = (struct Node*)malloc(sizeof(struct Node));
 			temp = temp->next;
 			temp->next = NULL;
 		}
 	}
 	while(first || second)
 	{
 		temp->next = (struct Node*)malloc(sizeof(struct Node));
 		temp = temp->next;
 		temp->next = NULL;
 			
 		if(first)
 		{
 			temp->coeff = first->coeff;
 			temp->pow = first->pow;
 			first = first->next;
 		}

 		else if(second)
 		{
 			temp->coeff = second->coeff;
 			temp->pow = second->pow;
 			second = second->next;
 		}
 	}
 	return result;
}



int main()
{

	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* result = NULL;
	int m,n;

	printf("\nEnter the corresponding data:-\n");
	printf("\nFirst polynomial:\n");
	printf("\n Enter highest power");
	scanf("%d",&m);
	first=readPolynomial(first,m);
	displayPolynomial(first);
	
	printf("\nSecond polynomial:\n");
	printf("\n Enter highest power");
	scanf("%d",&n);
	second=readPolynomial(second,n);
	displayPolynomial(second);
	
	printf(" \n ADDITION RESULT\n");
	result=addPolynomials(result, first, second);
	displayPolynomial(result);
	return 0;
}

