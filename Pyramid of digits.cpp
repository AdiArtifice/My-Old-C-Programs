#include<iostream>
using namespace std;
int main()
{
	int p,m,q,n;
	cout<<"\n Enter number of lines:";
	cin>>n;
	cout<<"\n\n";
	/* To print spaces */
	for(p=1;p<=n;p++)
	{
		for(q=1;q<=n-p;q++)
		cout<<"    ";
		/* To print digits */
		m=p;
		for(q=1;q<=p;q++)
		cout<<"    "<<m++;
		m=m-2;
		for(q=1;q<p;q++)
		cout<<"   "<<m--;
		cout<<"\n\n";
	}
	cout<<"\n";
}
