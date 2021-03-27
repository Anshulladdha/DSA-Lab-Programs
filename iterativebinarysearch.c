//iterative binary search
#include<stdio.h>
int IBS(int A[],int l,int h,int key)
{
	int mid;
	while(l<=h)
	{
		mid=l+(h-1)/2;
		if(A[mid]==key)
		{
			return mid;
		}
		if(A[mid]<key)
		l=mid+1;
		else
		h=mid-1;
	}
	return -1;
}
void main()
{
	int A[30];
	int key,l,h,n,i,x;
	printf("Enter size of array: ");
	scanf("%d",&n);
	h=n-1;
	l=0;
	printf("Enter array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter value of search: ");
	scanf("%d",&key);
	x=IBS(A,l,h,key);
	if(x!=-1)
	{
		printf("value present at index: %d",x);
	}
	else
	{
		printf("value is not present\n");
	}
}
