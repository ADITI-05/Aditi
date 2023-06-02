//Login page for travel agency with Encapsulation and Inheritance (multi level method).

#include<iostream>
#include<cstring>
using namespace std;

class first
{
	public:
		char ch;
		void inputF()
		{
			cout<<"===============Travel Agency===============\n";
			cout<<"Here Top 10 Destinations You Must Visit.....\n";
			cout<<"1. Ahmedabad\n";
			cout<<"2. Gandhinagar\n";
			cout<<"3. Baroda\n";
			cout<<"4. Rajkot\n";
			cout<<"5. Surat\n";
			cout<<"6. Surendranagar\n";
			cout<<"7. Amreli\n";
			cout<<"8. Junagadh\n";
			cout<<"9. Jamnagar\n";
			cout<<"10. Goa\n";	
		}
};

class second:public first
{
	public:
		string name,pas,cpas;
		
		void inputS()
		{
			cout<<"\n\n==========Welcome to registration page=============\n";
			fflush(stdin);
			cout<<"\nEnter Your Username : ";
			getline(cin,name);
			cout<<"\nEnter Your Password : ";
			getline(cin,pas);
			cout<<"\nEnter Your Confirm Password : ";
			getline(cin,cpas);
			
			if(pas != cpas)
			{
				cout<<"\n\nPlease Enter Same Password or Confirm Password.....\n";
				return inputS();
			}
		}
};

class third:public second
{
	public:
		string uname;
		void inputT()
		{
			cout<<"\n==========Welcome to Login page=============\n";
			cout<<"\nEnter Your Username : ";
			getline(cin,uname);
			cout<<"\nEnter Your Password : ";
			getline(cin,pas);
			
			if(uname==name && pas==cpas)
			{
				cout<<"\n------Your Login is Success.--------";
			}
			else
			{
				cout<<"\nAccess Denied!!!";
				cout<<"\nDo You Want to Login Again : ['y/n'] : ";
				cin>>ch;
				if(ch=='y')
				{
				 	return inputT();
				}
				else
				{
					cout<<"\nThank you for visit..";
				}
			}
		}
		
};
int main()
{
	third o1;
	
	o1.inputF();
	
	cout<<"Do You Want to Register Yourself for More Details : ['y/n'] : ";
	cin>>o1.ch;
	
	if(o1.ch=='y')
	{
	 	o1.inputS();
	 	o1.inputT();
	}
	else
	{
		cout<<"Thank you for visit..";
	}
	
	return 0;
}
