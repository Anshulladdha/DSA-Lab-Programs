#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coeff;
	int degree;
	struct node* next;
};
struct node* start=NULL;

struct node* createnode(int a,int b)
{
	struct node* n;
	if(b>-1)
	{
		if(start=NULL)
		{
			n=malloc(sizeof(struct node));
			n->coeff;
			n->degree=b;
			n->next=NULL;
			start=n;
			return n;
		}
		else
		{
			n=malloc(sizeof(struct node));
			struct node* t;
			t=start;
			n->coeff;
			n->degree;
			n->next=NULL;
			while(t->next!=NULL)
			{
				t=t->next;
			}
			t->next=n;
			return n;
		}
	}
}
void traverse()
{
	struct node* t;
	t=start;
	while(t!=NULL)
	{
		printf("\t%d x %d\t",t->coeff,t->degree);
		t=t->next;
	}
}
void main()
{
	struct node* n;
	int x,y;
	printf("Enter heighest degree of polynomial ");
	scanf("%d",&y);
	while(y!=-1)
	{
		printf("Enter coefficient of %d ",y);
		scanf("%d",&x);
		n=createnode(x,y);
		y=y-1;
	}
	traverse();
}
