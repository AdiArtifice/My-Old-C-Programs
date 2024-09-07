#include<iostream>
using namespace std;
int main()
{
	int no,p=0,z=0,n=0,i=1;
	do
	{
		cin>>no;
		if(no>0)
		++p;
		else if(no==0)
		++z;
		else 
		++n;
		i++;
		
	}
	while (i<=10);
	cout<<"\n no. of positive integers="<<p
	<<"no. of negative integers="<<n
	<<"no. of zero integers="<<z;
}
