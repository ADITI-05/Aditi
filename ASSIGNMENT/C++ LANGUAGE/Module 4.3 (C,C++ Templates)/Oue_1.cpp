// Write a program of to swap the two values using templates.

#include<iostream>
using namespace std;

template <typename T>
T Swap(T&a,T&b)
{
	T Temp;
	Temp=a;
	a=b;
	b=Temp;
}
int main()
{
	int A=12,B=56;
	
	cout<<"Before passing data to function Template : "<<endl;
	cout<<"A = "<<A<<endl<<"B = "<<B;
	
	Swap(A,B);
	
	cout<<endl<<"After passing data to function Template : "<<endl;
	cout<<"A = "<<A<<endl<<"B = "<<B;
}
