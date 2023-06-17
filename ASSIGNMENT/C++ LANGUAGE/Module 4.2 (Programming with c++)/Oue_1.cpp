// WAP to create simple calculator using class.

#include<iostream>
using namespace std;

class calculator
{
	float a,b;
	public:
		void input()
		{
			cout<<"Enter two numbers :"<<endl;
			cin>>a>>b;
		}
		
		float Add()
		{
			return a+b;
		}
	    float Sub()
		{
			return a-b;
		}
		float Mul()
		{
			return a*b;
		}
		float Div()
		{
			return a/b;
		}
};
int main()
{
	int ch;
	
	calculator obj;
	
	    cout<<"(1)Addition"<<endl;
	    cout<<"(2)Substraction"<<endl;
	    cout<<"(3)Multiplication"<<endl;
      	cout<<"(4)Division"<<endl;
	    cout<<"(5)Exit"<<endl;
	    
	do
	{	
		cout<<"Enter your choice : "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.input();
				cout<<"Result = "<<obj.Add()<<endl;
				break;
			case 2:
				obj.input();
				cout<<"Result = "<<obj.Sub()<<endl;
				break;
			case 3:
				obj.input();
				cout<<"Result = "<<obj.Mul()<<endl;
				break;
			case 4:
				obj.input();
				cout<<"Result = "<<obj.Div()<<endl;
				break;		
		}	
	} 
	while(ch>=1&&ch<=4);
	
	return 0;
}
