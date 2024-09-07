#include<iostream>
using namespace std;
long int factorial(int a);
int main()
{
	int b;
	long int fact;
	cout<<"\n enter number:";
	cin>>b;
	fact=factorial(b);
	cout<<"\n Factorial of"<<b<<" is "<<fact;
}
long int factorial (int x)
{
	long int f=1;
	int i;
	for(i=x;i>=1;i--)
	f=f*i;
	return(f);
}
