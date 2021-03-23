#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int hi,int lo)
{   
    int p=a[hi];
    int i,j;
    j=lo;
    for(i=j-1;j<hi;j++)
    {
        if(a[j]<p)
        {
        i++;
        swap(a[j],a[i]);
        }
    }
    swap(a[hi],a[i+1]);
    return i+1;

    
    
}
void quicksort(int a[],int hi,int lo)
{
    if(hi>lo)
    {
        int q=partition(a,hi,lo);
        quicksort(a,hi,q+1);
        quicksort(a,q-1,lo);
    }
}
int main()
{
    int a[]={4,2,5,7,6,11,3};
    int n=sizeof(a)/sizeof(int);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    quicksort(a,n-1,0);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
}