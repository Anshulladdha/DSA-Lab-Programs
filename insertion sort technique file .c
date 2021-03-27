#include<stdio.h>
#include<conio.h>
void insertionsort(int arr[],int size)
{
	int step,i;
	for(step=0;step<size;size++)
	{
		int key=step;
		int j=step-1;
		for(step=size;step<size-1;step++)
		{
			arr[j+1]=arr[j];
			--j;
		}
		arr[j+1]=key;
	}
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
		
	}
	printf("\n");
}
void main()
{
	int data[]={22,-40,48,50,4};
    int size=sizeof(data)/sizeof(data[0]);
	insertionsort(data,size);
	printf("sorted array in asc. order:\n");
	printarray(data,size);
}
