#include<stdio.h>
#include<stdlib.h>
struct node
{                      //structure of node
	int info;
	struct node  *link;	
};
int count=0;
struct node *START =NULL;         //start  pointer to control the link list
struct node *  createNode();
void insertnode(); //insert at last
void deleteNode();//Delete at first
void viewlist();//view list
int menu();//menu
void insertatfirst();//insert at first
int getlength();
void insertafterposition();
struct node *  createNode()       //create node dynamically
{
	struct node *n;
	n=malloc(sizeof(struct node));
	return(n);
}
void insertnode()
{
	struct node *temp,*t;
   	temp=createNode();
	printf("Enter the data in node\n");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(START==NULL)
	START=temp;
	else
	{
	    t=START;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
	 }
	
}
void deletenode()    //delete at firstt
{
	if(START==NULL)
	printf("List Empty Hai\n");
	else
	{
		struct node *q;
		q=START->link;
		START=START->link;
		free(q);
	}
}
void viewlist()
{
	struct node *t;
	if(START==NULL)
	printf("No List Is There\n");
	else
	{
		t=START;
		while(t!=NULL)
		{
			printf("%d",t->link);
			t=t->link;
		}
		printf("\n");
	}
}
void insertatfirst()
{
	struct node *newnode;
	newnode=createNode();
	printf("Enter the data in node\n");
	scanf("%d",&newnode->info);
	if(START==NULL)
	START=newnode;
	else
	{
		newnode->link=START;
		START=newnode;
	}
}
int getlength()
{
	struct node *t;
	if(START==NULL)
	printf("LIST IS EMPTY");
	else
	{
		t=START;
		while(t!=NULL)
		{
			count+=1;  //count=count+1
			t=t->link;
		}
	}
	return count;
}
void insertafterposition()
{
	int position;
	struct  node* newnode,*t;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		printf("chal beta position bta jis node ke baad tu daalna chahtaa hai\n");
		scanf("%d",&position);
		if(position>getlength())
		{
			printf("Aapne galat position di hai\n");
			insertafterposition();  //Recursion
		}
		else
		{
			int  i=1;
			newnode=createNode();
			printf("Data de \n");
			scanf("%d",&newnode->info);
			newnode->link=NULL;
			if(START==NULL)
			START=newnode;
			else
			{
				t=START;
				while(i<position)
				{
					t=t->link;
					i++;
				}
				newnode->link=t->link;
				t->link=newnode;
			}
		}
	}
}
int menu()
{
	int ch;
	printf("\t\t\t 1. INSERT NODE AT LAST IN LINK LIST\n");
	printf("\t\t\t 2. VIEW LIST IN LINK LIST\n");
	printf("\t\t\t 3. DELETE NODE AT FIRST IN LINK LIST\n");
	printf("\t\t\t 4. EXIT\n");
	printf("\t\t\t 5. INSERT NODE AT FIRST IN LINK LIST\n");
	printf("\t\t\t 6. TO SEE THE LENGTH OF LINK LIST\n");
	printf("\t\t\t 7. TO INSERT AFTER A NODE IN A LINK LIST\n");
	printf("ENTER THE CHOICE\n");
	scanf("%d",&ch);
	return(ch);
}
void main()
{
	int k;
	while(1)
	{
		switch(menu())
		{
			case 1:
				insertnode();
				break;
			case 2:
				viewlist();
				break;
			case 3:
				deletenode();
				break;
			case 4:
				exit(0);
				break;
			case 5:
				insertatfirst();
				break;
			case 6:
				k=getlength();
				printf("The length of link list is %d\n",k);
				break;
			case 7:
				insertafterposition();
				break;
			default:
				printf("\n chal nikal yahan se \n");
		}
	}
}
