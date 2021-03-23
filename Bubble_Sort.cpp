#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void bubble_sort(int a[],int n)
{
    int i,j;
    bool k=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1-i;j++)
        if(a[j]>a[j+1])
       { swap(a[j],a[j+1]);
            k=1;
    }
    if (!k)
    break;
    }
}
int main()
{
    int arr[]={50,40,30,60,20,10};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for (int i=0;i<n;i++)
    cout<<" "<<arr[i];
}