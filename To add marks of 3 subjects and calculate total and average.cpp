#include<iostream>
using namespace std;
int main()
{
	int m1, m2, m3;
	float sum=0, avg=0.0;
	cout<<"Enter marks of 3 subjects ";
	cin>>m1>>m2>>m3;
	sum=m1+m2+m3;
	avg=sum/3;
	cout<<"\n Total is "<<sum;
	cout<<"\n Average is "<<avg;
	return 0;
}
