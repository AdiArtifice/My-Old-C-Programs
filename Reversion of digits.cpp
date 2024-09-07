#include<iostream>
using namespace std;
int reverse(int no);
int main()
{

		int p,q;
	    cout<<"enter number:";
	    cin>>p;
	    q=reverse(p);
	    cout<<"\n reverse of "<<p<<" is "<<q;
}
int reverse(int n)
{
	int digit,rev_n=0;
	while(n!=0)
	{	
	digit=n%10;
	rev_n=rev_n*10+digit;
	n=n/10;
    }
	return(rev_n);
}
