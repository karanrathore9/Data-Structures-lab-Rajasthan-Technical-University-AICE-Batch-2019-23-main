#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void select_sort(int a[],int n )
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
         swap(a[min],a[i]);
    }
   
}
int main()
{
    int arr[]={6,5,4,3,2,1};
    int i,n;
    n=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    select_sort(arr,n);
    cout<<endl;
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}