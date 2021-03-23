#include<iostream>
using namespace std;
void shellsort(int a[], int n)
{
    int gap,i,j,t;
    for(gap=n/2;gap>=1;gap/=2)
    {
        for(i=gap;i<n;i++)
        {
            t=a[i];
            j=i-gap;
            while(j>=0&&a[j]>t)
            {
                a[j+gap]=a[j];
                j=j-gap;
            }
            a[j+gap]=t;
        }
    }
    
}
int main()
{
    int a[]={10,9,8,7,6,5,4,3,2,1,0};
    int i,j;
    int n=sizeof(a)/sizeof(int);
    for ( i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    shellsort(a,n);
    for (j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}