#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x,t,sum;
	int i,n=20;
	cout<<"\n input x:";
	cin>>x;
	cout<<"\n"<<x;
	/* converting x into radians */
	x=x*3.142/180;
	t=1;
	sum=1;
	for (i=1;i<n+1;i++)
	{
		t=t*pow((double)(-1),(double)(2*i-1))*x*x/
		(2*i*(2*i-1));
		sum=sum+t;
	}
	cout<<"\n cos(x)="<<sum;
}
