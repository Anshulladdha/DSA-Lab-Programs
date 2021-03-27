//fibonacifibonaci series using recursion
#include<stdio.h>
#include<conio.h>
#include<time.h>
long int fib(long int n)
{
	if(n<=1)
	return n;
	return fib(n-2)+fib(n-1);
}
main()
{
	long int n=9;
	clock_t begin,end;
	double time_spent;
	begin=clock();
	printf("%ld\n",fib(n));
	end=clock();
	time_spent=(double)(end-begin)/CLK_TCK;
	printf("\nTime Taken %If",time_spent);
}
