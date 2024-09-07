#include<iostream>
using namespace std;
int main()
{
	float x,t,sum;
	int i,n,prod;
	cout<<"\n Input x & n:";
	cin>>x>>n;
	t=1;
	sum=1;
	for(i=1;i<n;i++)
	{
		prod=i;
		t=t*x/prod;
		sum=sum+1;
	}
	cout<<"\n e raised to power x="<<sum;
} /* End of main */
