#include<iostream>
using namespace std;
void printar(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void insert(int a[],int n)
{
    int t,i;
    t=a[n];
    while (i>1&&t>a[i/2])
    {
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=t;
}
void createheap(int a[], int n)
{
    int i;
    for (i=2;i<=n;i++)
    {
        insert(a,i);
    }
}
void deleteheap(int a[],int n)
{
    int t=a[1];
    int i,j;
    a[1]=a[n];
    j=2*i;
    while(j<n)
    {
    if(a[j+1]>a[j])
        j=j+1;
    if(a[i]<a[j])
    {   swap(a[i],a[j]);
        i=j;
        j=j*2;
    }
    else 
    {
        break;
    }
    }
}       
int main()
{
    int a[]={-1,10,20,30,25,4,40,35};
    int n=7;
     printar(a,n);
    createheap(a,n);
    deleteheap(a,n);
    printar(a,n);

}