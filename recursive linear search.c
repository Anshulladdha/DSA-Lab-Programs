#include<stdio.h>
#include<conio.h>
int Recursivelinearsearch(int arr[],int key,int index,int n)
{
	if(index>n)
	{
		return 0;
	}
	if(arr[index]==key)
	{
		return index;
	}
	else
	{
		return Recursivelinearsearch(arr,key,index,n);
	}
}
int main()
{
	int i,n,key,result,arr[10];
	printf("Enter the total number of elements to be inserted in the array\n");
	scanf("%d",&n);
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&key);
	result=Recursivelinearsearch(arr,key,0,n);
	if(result!=0)
	{
		printf("Element found at pos %d\n ");
	}
	else
	{
		printf("Element is not present in the array");
	}
}

