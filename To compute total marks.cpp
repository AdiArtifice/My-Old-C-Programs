#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j,no,marks,total;
	cout<<"\n enter no of students & subjects\n";
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cout<<"\n enter roll no\n";
		cin>>no;
		total=0;
		cout<<"\n enter marks of "<<m<<" subjects for"<<no<<":";
		for(j=1;j<=m;j++)
		{
			cin>>marks;
			total=total+marks;
		}
		cout<<"\n total marks="<<total;
	}
}
