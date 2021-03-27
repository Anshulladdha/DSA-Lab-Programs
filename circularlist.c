#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node* last=NULL;
void display(struct node *last);
struct node* addatbeg(struct node *last,int value);
struct node* addtoempty(struct node *last,int value);
struct node* addatend(struct node *last,int value);
struct node* addafter(struct node *last,int value,int item);

void display(struct node *last)           // to access the link list using the last pointer
{
	struct node *t;
	if(last==NULL)
	printf("List Khali Hai\n");
	else
	{
		do
		{
			t=last->next;
			printf("%d ",t->data);
			t=t->next;
		}while(t!=last->next);
	}	
}
struct node* addatbeg(struct node *last,int value)
{
	struct node *n;
	n=malloc(sizeof(struct node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	return(last);
}
struct node* addtoempty(struct node *last,int value)
{
	struct node *n;
	n = malloc(sizeof(struct node));
	n->data=value;
	last=n;
	last->next=last;
	return(last);	
}
struct node* addatend(struct node *last,int value)
{
	struct node *n;
	n =malloc(sizeof(struct node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	last=n;
	return(last);
}
struct node* addafter(struct node *last,int value,int item)
{
	struct node	 *t,*n;
    t=last->next;
    do
    {
	    if(t->data==item)
	    {
		    n=malloc(sizeof(struct node));
		    t->data=value;
			n->next=t->next;
			t->next=n;
		    return (last);
	    }
	    t=t->next;
    }
	while(t!=last->next);
    printf("%d is not present in the list",item);
    return (last);
}
struct node* createlist(struct node *last)
{
	int n,value,i;
	printf("kitni value tu dehna chahta hai\n");
	scanf("%d",&n);
	printf("chal beta phle data de\n");
	scanf("%d",&value);
	last=addtoempty(last,value);
	for(i=2;i<=n;i++)
	{
		printf("chal beta bacha hua  data de\n");
		scanf("%d",&value);
		last=addatend(last,value);
	}
	return (last);
}
void main()
{
	int choice,value,item;
	struct node* last=NULL;
	while(1)
	{
		
		printf("1.Create List\n");
		printf("2.Display List\n");
		printf("3.Add Node at Beginningin Circular Link List \n");
		printf("4.Add at Empty in Circular Link List\n");
		printf("5.Add at End in Circular Link List\n");
		printf("6.Add after in the Circular Link List\n");
		printf("7.Exit\n");
		printf("chal beta kya krna chahta hai\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			last=createlist(last);
			break;
			case 2:
			display(last);
			break;
			case 3:
			printf("Enter the value in list\n");
			scanf("%d",&value);
			last=addatbeg(last,value);
			break;
			case 4:
			printf("Enter the value for the list\n");
			scanf("%d",&value);
			last=addtoempty(last,value);
			break;
			case 5:
			printf("Enter the value for the list\n");
			scanf("%d",&value);
			last=addatend(last,value);
			break;
			case 6:
			printf("Enter the item value after new value to be inserted \n");
			scanf("%d",&item);
			printf("Node ki value de\n");
			scanf("%d",&value);
			last=addafter(last,value,item);
			break;
			case 7:
				exit(0);
				break;
			default:
				printf("chal ghar nikal\n");
				
		}//End of switch case
	}//End of while loop
	
}//End of main
