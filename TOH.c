#include<stdio.h>
void TOH(int n,char A,char B,char C)
{
	if(n==1)
	{
		printf("%d,%c,%c,%c\n",A,B,C);
		return;
	}
	else
	{
		TOH(n-1,A,C,B);
		printf("1,%c,%c,%c\n",A,B,C);
		TOH(n-1,B,A,C);
	}
 } 
 void main()
 {
 	int n;
 	printf("Enter no of disks:");
 	scanf("%d",&n);
 	printf("Here:\n(one disk at a time,from rod,Aux rod,To rod)pattern is shown:\n");
 	TOH(n,'A','B','C');
 }
