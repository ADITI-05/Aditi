// Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;

class math
{
	public:
		inline float Mul(float x,float y)
		{
			return (x*y);
		}
		inline float Cube(float x)
		{
			return (x*x*x);
		}
};
int main()
{
	math m1;
	float a,b;
	cout<<"Enter two values : "<<endl;
	cin>>a>>b;
	
	cout<<"Multiplication is : "<<m1.Mul(a,b);
	
	cout<<endl;
	
	cout<<"Cubic value is : "<<m1.Cube(a);	
}
