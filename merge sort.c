//merging dsa lab 09

#include<stdio.h>
int merge(int A[],int p,int q,int r);
void MS(int A[],int p,int r);


void MS(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		MS(A,p,q);
	    MS(A,q+1,r);
	    merge(A,p,q,r);
	}
}
int merge(int A[],int p,int q,int r)
{
	int i,j,k;
	i=p;
	j=q+1;
	k=p;
	int B[r+1];
	while(i<=q&&j<=r)
	{
		if(A[i]<A[j])
		{
			B[k++]=A[i++];
		}
		else
		{
			B[k++]=A[j++];
		}
	}
	while(i<=q)
	{
		B[k++]=A[i++];
	}
	while(j<=r)
	{
		B[k++]=A[j++];
	}
	for(i=p;i<=r;i++)
	{
		A[i]=B[i];
	}
}
int main()
{
	int  A[100],n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter array:\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	MS(A,0,n);
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}

