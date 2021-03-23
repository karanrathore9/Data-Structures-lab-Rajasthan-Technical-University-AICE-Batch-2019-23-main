#include<iostream>
using namespace std;

void printarray(int a[],int n)
 { 
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
 }
int maximum(int a[],int n)
 { int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
 return ++max;	
 }
 void countsort(int a[],int n,int max)
{
    int b[max],i,j=0;
    for (i=0;i<max;i++)
    b[i]=0;
    for ( i=0;i<n;i++)
    b[a[i]]++;
    for(i=0;i<max;i++)
    {
        while(b[i])
        {
            a[j]=i;
            b[i]--;
            j++;
        }
    }
}
 int main()
 {
     int a[]={18,3,22,7,11,44,12};
     int n,max,i;
     n=sizeof(a)/sizeof(a[0]);
     max=maximum(a,n);
     printarray(a,n);
     countsort(a,n,max);
     printarray(a,n);
 }