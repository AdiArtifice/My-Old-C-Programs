#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter two natural numbers= ";
	cin>>x>>y;
	while(x!=y)
	{
		if(x>y)
		x=x-y;
		if(y>x)
		y=y-x;
	}
	cout<<"\nThe GCD is= "<<x;
	return 0;
}
