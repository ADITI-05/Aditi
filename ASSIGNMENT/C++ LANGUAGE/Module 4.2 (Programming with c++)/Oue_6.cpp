/* Create a class person having members name and age.
   Derive a class student having member percentage.
   Derive another class teacher having member salary.
   Write necessary member function to initialize, read and write data.
   Write also Main function (Multiple/heirarchical Inheritance)
*/

#include<iostream>
using namespace std;

class person{
	public:
		string name;
		int age;
		
	void typeS()
	{
		fflush(stdin);
		
		cout<<"=====ENTER DETAILS FOR STUDENTS=====\n";
		
		cout<<"Enter Student name : ";
		getline(cin,name);
	
		cout<<"Enter Student age : ";
		cin>>age;
	}
	
	void typeT()
	{
		fflush(stdin);
		cout<<"\n=====ENTER DETAILS FOR TEACHERS=====\n";
		
		cout<<"Enter Teacher name : ";
		getline(cin,name);
	
		cout<<"Enter Teacher age : ";
		cin>>age;
	}
		
};

class student:public person{
	public:
		float pr;
		
		void st()
		{
			cout<<"Enter your Percentage : ";
			cin>>pr;
		}
		
		void displayS()
		{
			cout<<"\n=====STUDENT DETAILS======\n";
			cout<<"Your name is : "<<name<<endl;
			cout<<"Your age is : "<<age<<endl;
			cout<<"Your percentage is : "<<pr<<endl;
		}
		
};

class teacher:public person{
	public:
		double salary;
		
		void te()
		{
			cout<<"Enter your Salary : ";
			cin>>salary;
		}
		
		void displayT()
		{
			cout<<"\n=====TEACHER DETAILS=====\n";
			cout<<"Your name is : "<<name<<endl;
			cout<<"Your age is : "<<age<<endl;
			cout<<"Your salary is : "<<salary<<endl;
		}
};
int main()
{	
	student s;
	s.typeS();
	s.st();

	teacher t;	
	t.typeT();
	t.te();
	
	s.displayS();
	t.displayT();
	
	return 0;
}

