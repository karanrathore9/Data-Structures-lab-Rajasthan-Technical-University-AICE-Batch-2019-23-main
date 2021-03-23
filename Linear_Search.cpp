#include<iostream>
using namespace std;
int ls(int , int , int[]);
int main()
{
	int k,p,n,i;
	cout<<"Enter no of elements";
	cin>>n;
	int arr[100];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	cout <<"enter key: ";
	cin>>k;
	
	p=ls(n,k,arr);
	cout<<"key found at pos="<<p+1; 
	return 0;

}
int ls(int n ,int k,int a[11] )
{	if (n<0)
	return -2;
	if (a[n-1]==k)
	return n-1;
	else 
	return ls(n-1,k,a);
	
}

