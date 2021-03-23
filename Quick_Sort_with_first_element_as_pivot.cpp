#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int l,int h)
{   
    
   int p=a[l];
    int i,j;
    j=h;
    for(i=j+1;j>l;j--)
    {
        if(a[j]>p)
        {
        i--;
        swap(a[j],a[i]);
        }
    }
    swap(a[l],a[i-1]);
    return i-1;
    
}
void quicksort(int a[],int l,int h)
{
    if(h>l)
    {
        int q=partition(a,l,h);
        quicksort(a,q+1,h);
        quicksort(a,l,q-1);
    }
}
int main()
{
    int a[]={40,25,3,55,70,10};
    int n=sizeof(a)/sizeof(int);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    quicksort(a,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
}