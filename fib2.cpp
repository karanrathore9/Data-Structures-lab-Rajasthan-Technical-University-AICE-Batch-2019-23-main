#include<stdio.h>
#include<time.h>

long int lookup[100];
long int fib(int n)
{	
	if(lookup[n]==-1)
	{
	
		if   ( n<=1)
		lookup[n] = n;
		else
		lookup[n]=fib(n-2)+fib(n-1);
	}
	return lookup[n];
}
int main()
{
	long int n=40;
	double d;
	int i;
	for (i=0;i<100;i++)
	lookup[i]=-1;
	clock_t a,b;
	a=clock();
	printf("%ld\n",fib(n));
	b=clock();
	d=(double)(b-a)/CLK_TCK;
	printf("%1f",d);
	return 0;
}
