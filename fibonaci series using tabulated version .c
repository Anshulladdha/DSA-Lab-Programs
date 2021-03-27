#include<stdio.h>
#include<time.h>

long int fib(long int n)
{
	long int f[41];
	long int i;
	//double time_spent;
	f[0]=0;
	f[1]=1;
	for(i=0; i<=n; i++)
		f[i]=f[i-1]+f[i-2];
	return f[n];
}

main()
{
	long int n=40;
	clock_t begin, end;
	double time_spent;
	begin = clock();
	printf("Fibonacci number is %ld \n", fib(n));
	end = clock();
	time_spent = (double)(end-begin)/CLK_TCK;
	printf("\nTime Taken %lf ", time_spent);
}
