#include<stdio.h>
void BS(int A[],int n)
{
	int i,j,temp;
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag++;
			}
			if(flag==0)
			break;
		}
	}
}
int main()
{
	int A[100],n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);	
    }
    BS(A,n);
    printf("Array after sorting\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",A[i]);
	}
}
