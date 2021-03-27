#include<stdio.h>
int recursivebinarysearch(int a[],int l,int h, int key)
{
	if(l<=h)
	{
		int mid;
		mid=(l+h)/2;
		if(a[mid]==key)
		return mid;
		
		if(a[mid]<key)
		return recursivebinarysearch(a,mid+1,h,key);
		
		if(a[mid]>key)
		return recursivebinarysearch(a,l,mid-1,key);
	}
	return -1;
	
}
int main()
{
	int a[]={3,6,8,12,14,17,25,29};
	int n=8;
	int key=29;
	int result=recursivebinarysearch(a,0,n-1,key);
	if(result==-1)
	{
		printf("Not Found");
	}
	else
	{
		printf("Found at index = %d",result);
	}
	return 0;
}
