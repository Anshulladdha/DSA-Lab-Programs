#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *prev,*next;
};
struct node* START=NULL;
void insertnodeatfirst();
void deletenodeatfirst();
void viewlist();
int menu();

void insertnodeatfirst()
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->info);
	newnode->prev=NULL;
	newnode->next=NULL;
	if (START==NULL)
	START=newnode;
	else
	{
		START->prev=newnode;
		newnode->next=START;
		START=newnode;	
	}
}
void deletenodeatfirst()
{
	struct node* temp;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		temp=START;
		START=START->next;
		START->prev=NULL;
		free(temp);
	}
}
void viewlist()
{
	struct node *temp;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		temp=START;
		while(temp!=NULL);
		{
			printf("%d",temp->info);
			temp=temp->next;
		}
		
	}
}
int menu()
{
	int n;
	printf("\t\t\t 1.view list\n");
	printf("\t\t\t 2.INSERT AT FIRST IN LIST\n");
	printf("\t\t\t 3.DELETE AT FIRST IN LIST\n");
	printf("\t\t\t 4.EXIT\n");
	//printf("\t\t\t 1.view list\n");
	//printf("\t\t\t 1.view list\n");
	//printf("\t\t\t 1.view list\n");
	printf("Enter Your Choice\n");
	scanf("%d",&n);
	return(n);
}
int main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:
				viewlist();
				break;
			case 2:
				insertnodeatfirst();
				break;
			case 3:
				deletenodeatfirst();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("not available\n");			
		}
	}
}

