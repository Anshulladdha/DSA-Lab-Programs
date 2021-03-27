#include<stdio.h>
#include<stdlib.h>
struct Queue
{
	int size;
	int f;
	int r;
	int *arr;
};
int isfull(struct Queue *q)
{
	if(q->r==q->size-1)
	return 1;   //true
return 0;       //False
}
int isEmpty(struct Queue *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	return 0;
}
void enqueue(struct Queue *q,int val)
{
	if (isfull(q))
	{
		printf("queue is full\n");
	}
	else
	{
		q->r=q->r+1;
		q->arr[q->r]=val;
		printf("enqueue value %d\n",val);
	}
}
int dequeue(struct Queue *q)
{
	int a=-1;
	if(isEmpty(q))
	{
		printf("Queue is empty\n");
		
	}
	else
	{
		q->f=q->f+1;
		a=q->arr[q->f];
	}
	return a;
}
int main()
{
	struct Queue q;
	q.size=5;
	q.f=q.r=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	enqueue(&q,50);
	enqueue(&q,70);
	
	//Dequeue operation
	printf("Deleting 1 value %d:\n",dequeue(&q));
	printf("Deleting 2 value %d:\n",dequeue(&q));
	printf("Deleting 3 value %d:\n",dequeue(&q));
	printf("Deleting 4 value %d:\n",dequeue(&q));
	printf("Deleting 5 value %d:\n",dequeue(&q));
	return 0;
}

