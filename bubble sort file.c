#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
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
int main()
{
	int arr[]={50,40,30,20,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	printf("Sorted Array is:\n");
	printarray(arr,n);
}
