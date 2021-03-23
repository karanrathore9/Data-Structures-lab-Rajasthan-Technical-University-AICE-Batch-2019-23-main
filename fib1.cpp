#include<stdio.h>
#include<time.h>
long int fib(int n)
{
	if   ( n<=1)
	return n;
	else
	return fib(n-2)+fib(n-1);
}
int main()
{
	long int n=40;
	double d;
	clock_t a,b;
	
	a=clock();
	printf("%ld\n",fib(n));
	b=clock();
	d=(double)(b-a)/CLK_TCK;
	printf("%1f",d);
	return 0;
}
