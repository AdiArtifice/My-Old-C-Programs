#include <iostream>
using namespace std;
int main ()
{
	int i,n, denominator;
	float x, sum, term;
	cin>>x>>n;
	for(sum=x, term=x, i=2; i<=n; ++i)
	{
		denominator=(2*i-2)*(2*i-1);
		term*= (-x*x)/denominator;
		sum+=term;
	}
	cout<<"\n sum="<<sum<<" x="<<x<<" n="<<n;
}

