#include<iostream>
#include<cmath>
using namespace std;
#define LIMIT 25
int main()
{
	int a,b,c,c_sqr;
	for(a=1;a<LIMIT;a++)
	for(b=a+1;b<=LIMIT;b++)
	{
		c_sqr=a*a+b*b;
		c=sqrt(c_sqr) /* truncate fraction*/;
		if(c*c==c_sqr)
		cout<<"\n"<<a<<" "<<b<<" "<<c;
	}
}
