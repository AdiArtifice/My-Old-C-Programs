#include<iostream>
using namespace std;
int main()
{
	int bin,binary,decimal=0,digit,base=0;
	cout<<"\n input binary number:";
	cin>>binary;
	cout<<"\n"<<binary;
	bin=binary;
	while(binary)
	{
		digit=binary%10;
		decimal+=digit<<base;
			base+=1;
			binary/=10;
	}
	cout<<"\n Decimal equivalent of binary num="<<decimal;
}
