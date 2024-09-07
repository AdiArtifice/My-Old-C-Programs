#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum(int n);
	cout<<"\n enter value for n:";
	cin>>n;
	cout<<"sum of first "<<n<<" natural nos ="<<sum(n);
}
int sum(int m)
{
 	int i, result=1;
 	for(i=1;1<=m;i++)
 	result+=i;
 	return(result);
}

