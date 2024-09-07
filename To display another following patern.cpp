#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter no. of lines= ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
    }
    return 0;
}
