// Take 3 employee detail and print their name, id and salary.Using array and encapsulation method.

#include<iostream>
using namespace std;

class data{
	public:
		string name;
		int id;
		int salary[3];
		
		void input()
		{
			cout<<"\nEnter Employee Name : ";
			cin>>name;
			cout<<"\nEnter Employee Id Number : ";
			cin>>id;
			cout<<"\nEnter Employee last Three Month Salary : ";
			for(int i=0;i<3;i++)
			{
				cout<<endl<<"Last "<<i+1<<" Month : ";
				cin>>salary[i];
			}
		}
		
		void display()
		{
			cout<<"\nYour Name is : "<<name<<endl;
			cout<<"Your Id is : "<<id<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<"Your "<<i+1<<" Last Month salary is: "<<salary[i]<<endl;
			}
		}
};

int main()
{
	data d[3];
	
	for(int i=0;i<3;i++)
	{
		cout<<"\n---------Employee No : "<<i+1<<"------------\n";
		d[i].input();
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\n---------Employee Data No : "<<i+1<<"------------\n";
		d[i].display();
	}

	return 0;
}
