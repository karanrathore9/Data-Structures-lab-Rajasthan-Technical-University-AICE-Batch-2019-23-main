#include<iostream>
using namespace std;
void merge (int A[],int p,int q,int r)
{
	int i,j,k;
	i=p;
	j=q+1;
	k=p;
	int B[r+1];
	while(i<=q&&j<=r)
	{
		if(A[i]<A[j])
		{
			B[k++]=A[i++];	
		}
		else
		{
			B[k++]=A[j++];	
		}
	}
	while(i<=q)
	{
		B[k++]=A[i++];
	}
	while(j<=r)
	{
	B[k++]=A[j++];
	}
	for(i=p;i<k;i++)
	{
		A[i]=B[i];
	}
}
void ms(int A[],int p,int r)
{
int q;
	if(p<r)
	{
		q=(p+r)/2;
		ms(A,p,q);
		ms(A,q+1,r);
		merge(A,p,q,r);	
	}
}
int  main()
{
	int a[]={9,7,8,6,5,2,1,3,4,0};
	int p=0,r=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<r;i++)
	{
		cout<<a[i]<<" ";
	}
	ms(a,p,r-1);
	cout<<endl;
	for(int i=0;i<r;i++)
	{
		cout<<a[i]<<" ";
	}
}
