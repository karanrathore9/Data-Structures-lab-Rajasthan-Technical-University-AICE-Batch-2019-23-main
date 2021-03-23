#include<iostream>
using namespace std;

void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<" "<<a[i];
	cout<<endl;
}

int maximum(int a[],int n)
 { int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
 return max;	
 }

int cmnod(int max)
 {	int nod=0;
	while(max>0)
	{
 	max=max/10;
 	nod++;
	}
 return nod;	
 }
void bucket(int a[],int n)
 {
	int max=maximum(a,n);
	int nod=cmnod(max);
	int neb[10],b[10][10],loc,div=1;
	for(int pass=1;pass<=nod;pass++)
	{
		for (int i=0;i<10;i++)
		 neb[i]=0;
		for(int j=0;j<n;j++)
		{
		 loc=(a[j]/div)%10;
 		 b[loc][neb[loc]++]=a[j];
 		}
		for(int i=0,k=0;i<10;i++)
		{
 	     for(int j=0;j<neb[i];j++)
 		 {
 		  a[k++]=b[i][j];
		 }
		}
	div=div*10;	
	}
 }

int main()
{
int a[]={66,98,105,61,54,136};
int n=sizeof(a)/sizeof(a[0]);
printarray(a,n);
bucket(a,n);	
printarray(a,n);
return 0;
}
