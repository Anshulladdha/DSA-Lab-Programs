//CIRCULAR QUEUE

#include<stdio.h>
#include<stdlib.h>
struct CQueue
{
	int size;
	int f;   //front
	int r;  //rear
	int *arr;
};
int isFULL(struct CQueue *q)
{
	if((q->r+1)%q->size==q->f)
	return 1;
return 0;	
}
int isEmpty(struct CQueue *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	return 0;
}
void enqueue(struct CQueue *q,int val)
{
	if(isFULL(q))
	{
		printf("Circular Queue is full\n");
    }
    else
    {
    	q->r=(q->r+1)%q->size;
    	q->arr[q->r]=val;
    	printf("Enqueue value %d:\n",val);
	}
}
int dequeue(struct CQueue *q)
{
	int a=-1;
	if(isEmpty(q))
	{
		printf("Cqueue is Empty\n");
	}
	else
	{
		q->f=((q->f+1)%q->size);
		a=q->arr[q->f];
	}
	return a;
}
main()
{
	struct CQueue q;
	q.size=4;
	q.f=q.r=0;
	q.arr=(int *)malloc(q.size*sizeof(int));
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
	printf("Deleting the value 1 %d \n",dequeue(&q));
	printf("Deleting the value 2 %d \n",dequeue(&q));
	printf("Deleting the value 3 %d \n",dequeue(&q));
	printf("Deleting the value 4 %d \n",dequeue(&q));
	enqueue(&q,50);
	enqueue(&q,60);
	enqueue(&q,70);
	enqueue(&q,80);
	enqueue(&q,90);
	enqueue(&q,100);
	if(isEmpty(&q))
	{
		printf("Queue is empty\n");
	}
	if(isFULL(&q))
	{
		printf("Queue is full\n");
	}
}
