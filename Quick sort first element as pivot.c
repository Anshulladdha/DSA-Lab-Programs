//quick sort considering first element as pivot
#include<stdio.h>
void qs(int A[],int p,int r)
{
	if(p<r)
	{
		int q=partition(A,p,r);         //p=low and r=high
		qs(A,p,q-1);
		qs(A,q+1,r);
	}
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int A[],int p,int r)
{
	int j;
	int X=A[p];     //X is a pivot element
	int i=p;
	for(j=p+1;j<=r;j++)
	{
		if(A[j]<=X)
		{
			i=i+1;
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[i],&A[p]);
	return i;
}
int main()
{
	int i;
	int arr[]={6,10,13,5,8,2,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	qs(arr,0,n-1);
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
