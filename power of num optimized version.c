#include<stdio.h>
int power(int m,int n)
{
	if(n==0)
	return 1;
	if(n%2==0)
	return(power(m*m,n/2));
	else
	return(m*power(m*m,(n-1)/2));
}
void main()
{
	int m,n;
	printf("Enter base value:");
	scanf("%d",&m);
	printf("Enter power of value:");
	scanf("%d",&n);
	printf("value of %d^%d is: %d",m,n,power(m,n));
}
