#include<iostream>
using namespace std;
int main()
{
	int i,x,y,f=1;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	for(i=1;i<=y;i++)
	{
		f=f*x;
	}
	cout<<"\nAns for x raised to y is "<<f;
	return 0;
}
