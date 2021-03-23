#include<iostream>
using namespace std;
int pow(int n,int m)
{
	if (m==0)
	 return 1;
	else
	return pow(n,m-1)*n;
	
}
int main()
{
	int n,m;
	cout <<"enter no: ";
	cin>>n;
	cout <<"enter power: ";
	cin>>m;
cout<<n<<" raised to power "<<m<<" is equal to "<<pow(n,m)<<endl;
return 0;
}
