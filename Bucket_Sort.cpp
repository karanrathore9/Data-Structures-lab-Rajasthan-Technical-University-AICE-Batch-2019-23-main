#include<iostream>
using namespace std;
void printar(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void bucket(int a[],int n)
{
    int max=a[0],dig=0,pass;
    int nub[10],bucket[10][10];
    int loc,div=1,k=0;

    for(int i=1;i<n;i++)
    {
        if (max<a[i])
            {
                max=a[i];
            }
    }

    while(max>0)
    {
        max=max/10;
        dig++;
    }
    for(pass=1;pass<=dig;pass++)
    {
        k=0;
        for(int i=0;i<10;i++)
        {
            nub[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            loc=(a[i]/div)%10;
            bucket[loc][nub[loc]++]=a[i];
            
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<nub[i];j++)
            {   
                a[k++]=bucket[i][j];
            }
        }
        div=div*10;
    }
}
int main()
{
    int a[]={66,98,105,61,54,136};
    int n=sizeof(a)/sizeof(a[1]);
    printar(a,n);
    bucket(a,n);
    printar(a,n);
    return 0;

}