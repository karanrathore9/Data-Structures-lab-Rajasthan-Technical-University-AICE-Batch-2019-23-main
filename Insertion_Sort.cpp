#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,j=0,x;
    for (i=1;i<n;i++)
   { 
       x=a[j];
       j=i-1;
    
    while (j>=0&&a[j]>x)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=x;
    
}}
int main()
{
    int arr[]={50,40,30,60,20,10};
    int n=sizeof(arr)/sizeof(int);
    insertion_sort(arr,n);
    for (int i=0;i<n;i++)
    cout<<" "<<arr[i];
}