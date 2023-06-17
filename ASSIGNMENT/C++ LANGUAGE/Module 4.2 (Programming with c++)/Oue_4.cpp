// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class Addition
{
	float c;
	public:
		Addition(float a,float b);
};
Addition ::Addition(float a,float b)
{
	c=a+b;
	cout<<"Addition is :"<<c<<endl;
}

class Substraction
{
	float c;
	public:
		Substraction(float a,float b);
};
Substraction ::Substraction(float a,float b)
{
	c=a-b;
	cout<<"Substraction is :"<<c<<endl;
}

class Multiplication
{
	float c;
	public:
		Multiplication(float a,float b);
};
Multiplication ::Multiplication(float a,float b)
{
	c=a*b;
	cout<<"Multiplication is :"<<c<<endl;
}

class Division
{
	float c;
	public:
		Division(float a,float b);
};
Division ::Division(float a,float b)
{
	c=a/b;
	cout<<"Division is :"<<c<<endl;
}

int main()
{
	float x,y;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	
	Addition add(x, y);
    Substraction sub(x, y);
    Multiplication mul(x, y);
    Division div(x, y);
}
