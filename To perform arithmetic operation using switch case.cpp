#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1, num2, num3;
	cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n ";
	cin>>op;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	switch(op)
	{
		case'1':num3=num1+num2;
		cout<<"Addition value is: "<<num3;
		break;
		
		case'2':num3=num1-num2;
		cout<<"Subtraction value is: "<<num3;break;
		
		
		case'3':num3=num1*num2;
		cout<<"Multiplication value is: "<<num3;
		break;
		
		case'4':num3=num1/num2;
		cout<<"Division value is: "<<num3;
		break;
		
		default:
		cout<<"Enter correct option ";
		break; 
	}
	return 0;
}
