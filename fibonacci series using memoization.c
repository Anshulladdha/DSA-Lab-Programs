//fibonacifibonaci series using memoized version
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define NIL -1
#define MAX 6
long int lookup[MAX];
void initialize()
{
	int i;
	for(i=0;i<MAX;i++)
	lookup[i]=NIL;
}
long int fib(long int n)
{
    if(n<=1)
    {
    	lookup[n]=n;
    	return n;
	}
	else
	{
		if (lookup[n-2]==-1)
		lookup[n-2]=fib(n-2);
		if (lookup[n-1]==-1)
		lookup[n-1]=fib(n-1);
		return lookup[n-2]+lookup[n-1];
	}
}
int main()
{
	long int n=15;
	clock_t begin,end;
	double time_spent;
	initialize();
	begin=clock();
	printf("Fibonacci member is %ld \n",fib(n));
	end=clock();
	time_spent=(double)(end-begin)/CLK_TCK;
	printf("\nTime Taken %lf",time_spent);
}

