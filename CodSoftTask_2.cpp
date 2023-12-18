// CODSOFT TASK 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	char op;
	cout<<"Please enter first number :"<<endl;
	cin>>num1;
	cout<<"Please enter second number :"<<endl;
	cin>>num2;
	cout<<"Please enter a for addition"<<endl;
	cout<<"Please enter b for subtraction"<<endl;	
	cout<<"Please enter c for multiplication"<<endl;	
	cout<<"Please enter d for division"<<endl;	
	cin>>op;
	if(op=='a')//a is used for"+" operator(addition)
	{
	cout<<"The Sum = "<<num1<<" + "<<num2<<" = "<<(num1 + num2)<<endl;
	}
	else if(op=='b')//b is used for"-" operator(subtraction)
	{
	cout<<"The Sub = "<<num1<<" - "<<num2<<" = "<<(num1 - num2)<<endl;
	}
	else if(op=='c')//c is used for"*" operator(multiplication)
	{
	cout<<"The Mult = "<<num1<<" * "<<num2<<" = "<<(num1 * num2)<<endl;
	}
	else if(op=='d')//d is used for"/" operator(division)
	{
	cout<<"The Divid = "<<num1<<" / "<<num2<<" = "<<(num1 / num2)<<endl;
	}
	else
	{
	cout<<" Invalid Operation "<<endl;
	}
    
	return 0;
}
