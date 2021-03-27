
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*top= NULL;
typedef struct Node st;
void push(int value)
{
	st *newNode;;
	newNode=(st*)malloc(sizeof(st));
	newNode->data=value;
	if(top==NULL)
	{
		newNode->next=NULL;
	}
	else
	{
		newNode->next=top;
		top=newNode;
		printf("\nInsertion is done!!!\n");
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("\nStack is Empty!!!\n");
	}
	else
	{
		st *temp=top;
		printf("\nDeleted element: %d\n",temp->data);
		top=temp->next;
		free(temp);
	}
}
void display()
{
	if(top==NULL)
	{
		printf("\nStack is Empty!!!\n");
	}
	else
	{
		st *temp=top;
		while(temp->next!=NULL)
		{
			printf("&d--->\n",temp->data);
			temp=temp->next;
		}
		printf("&d--->NULL\n",temp->data);
	}
}
void peek()
{
	if(top!=NULL)
	{
		st *t=top;
	    printf("%d\n",t->data);
	    top=t->next;
	}
	else
	{
		printf("can't fetch\n");
	}
}
void main()
{
	int choice,value;
	printf("\n::Stack using Linked List::\n");
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Display\n4.peek\n5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the value to be inser: ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				peek();
				break;
			case 5:
				exit(0);
			default:
				printf("\nWrong selection!!! Please try again!!!\n");
		}
	}
}
