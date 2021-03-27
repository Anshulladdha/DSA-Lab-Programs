#include<stdio.h>
#include<conio.h>
void shellsort(int arr[], int n)
{
	int gap,i,j,temp;
	for(gap=n/2;gap>=1;gap/=2)
	{
		for(i=gap;i<n;i++)
		{
			temp=arr[i];
			j=i-gap;
			while(j>=0 && arr[j]>temp)
			{
				arr[j+gap]=arr[j];
				j=j-gap;
			}
			arr[j+gap]=temp;
		}
	}
}
int main()
{
	int arr[]={89,78,98,56,34,76,13,23};
	int n,i;
	n=sizeof(arr)/sizeof(arr[0]);
	shellsort(arr,n-1);
	printf("\n Sorted array is:");
	for (i=0;i<n; i++)
	{
		printf("%d ", arr[i]);
	}
    return 0;
}
