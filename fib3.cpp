#include<stdio.h>
#include<time.h>
long int fib(long int n)
{	
long int f[100]; 
int i; 
f[0] = 0;   
f[1] = 1;  
for (i = 2; i <= n; i++) 
  f[i] = f[i-1] + f[i-2]; 
  
  return f[n]; 
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