#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void selectionsort(int array[],int size)
{
	int step,i;
	for(size=0;size<size-1;size++)
	{
		int minindex=step;
		for(i=step+1;i<size;i++)
		{
			if(array[i]<array[minindex])
			minindex=1;
		}
		swap(&array[minindex],&array[step]);
	}
}
void printarray(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	    printf("%d",array[i]);
	}
	print("\n");
}
int main()
{
	int data[]={22,-40,48,50,4};
    int size=sizeof(data)/sizeof(data[0]);
	selectionsort(data,size);
	printf("sorted array in asc. order:\n");
	printarray(data,size);
}
