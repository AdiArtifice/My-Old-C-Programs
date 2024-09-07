#include<iostream>
using namespace std;
int main()
{
	float
	sum_x=0,sum_y=0,sum_xy=0,sum_xsq=0,x,y,numerator,d,m,c;
	int i,n;
	cin>>n;
	{
		cin>>x>>y;
		sum_x+=x;
		sum_y+=y;
		sum_xy+=x*y;
		sum_xsq+=x*x;
	}
	numerator=n*sum_xy-sum_x*sum_y;
	d=n*sum_xsq-sum_x*sum_x;
	m=numerator/d;
	c=(sum_y-m*sum_x)/n;
	cout<<"\n slope of m="<<m<<"intercept c="<<c;
}
