/* Assessment : 2 (C++ and oops concept)

*/

#include<iostream>
#include<ctime>
using namespace std;

class ATM{
	private:
		int pin;
		float balance;
		string name;
		string address,location;
		int accnum;
			public:
		ATM()
		{		
			pin=12345;
			balance=20000;
			name="Rakesh Kharva";
			address="Mumbai";
			location="Andheri";
			accnum=5678;
		}
		void welcome()
		{
			// display time and date
			time_t now = time(0);
			char*dt = ctime(&now);
		
			cout<<"===================================WELCOME TO ATM===================================================="<<endl;
			cout<<"\n                      ---------------------------"<<endl;
			cout<<"\n \t\tCurrent date : "<<dt<<endl;
			cout<<"                      ---------------------------"<<endl;
			cout<<"\n=================================================================================================="<<endl;
			
			cout<<"Press 1 and then press Enter to access your account via pin Number"<<endl;
			cout<<"\n                                   or"<<endl;
			cout<<"\nPress 0 and Enter to get help"<<endl;
		}
		
		void accountpin(int epin)
		{
			if(epin==pin)
			{
			 cout<<"\nAccess grandted "<<endl;
			 menu();
			}
			else
			{
				cout<<"\nYOu had made your attempt which failed !! No more  attempt allowed!! Sorry!!"<<endl;
			}
		}
		
		void help()
		{
			cout<<"\n=====================ATM ACCOUNT STATUS====================="<<endl;
			cout<<"\nYou must have the correct pin number to access this account.\n see your bank representive for assistance during bank opning hours Thanks for, your choice today!!"<<endl;
		}
		
		void menu()
		{
		  
			cout<<"\n\t==========ATM Main Menu Screen=========="<<endl;
			cout<<"\t\tEnter [1] to Deposit Cash"<<endl;
			cout<<"\t\tEnter [2] to Withdraw Cash"<<endl;
			cout<<"\t\tEnter [3] to Balance inquiry"<<endl;
			cout<<"\t\tEnter [0] to Exit ATM"<<endl;
			
			int ch;
			cout<<"\nPLEASE ENTER A SELECTION AND PRESS RETURN KEY :"<<endl;
			cin>>ch;
			
			switch(ch) {
                case 1:
                    deposit();
                    break;
                case 2:
                    withdraw();
                    break;
                case 3:
                    inquiry();
                    break;
                case 0:
                    cout << "Thank you for using our ATM. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    menu();
            }
		  
		  
		}
		
		void deposit()
		{
			
			int amt;
			display();
			cout<<"Present available balance is :"<<balance<<endl;
			cout<<"\nEnter Deposite amount :";
			cin>>amt;
			
			balance+=amt;
			cout<<"Deposite Successfull"<<endl;
			cout<<"\nYour new available balance amount is :"<<balance<<endl;
			cout<<"\n\t\t\tThank You!"<<endl;
			cout << "\nPress any key to Return to the Main Menu" << endl;
		     menu();
		}
		
	    void withdraw()
	    {
	    	int amt;
	    	display();
	    	cout<<"\nEnter Withdraw amount :";
	    	cin>>amt;
	    	
	    	if(amt>balance)
			{
				unsucessfulwithdrawal();
			}
			else
			{
			    balance-=amt;
				cout<<"Withdraw Successfull"<<endl;
				cout<<"\nYour new available balance amount is :"<<balance<<endl;
			}
			
	    	menu();
		}
		
		void inquiry()
		{
			display();
		    cout<<"\nCurrent balance is :"<<balance<<endl;	
		    menu();
		}
		void display()
		{
			cout<<"\n\t\t==========ATM ACCOUNT HOLDER INFORMATION=========="<<endl;
			cout<<"The Name of thr Account Holder are :"<<name<<endl;
			cout<<"The Account Holder address is      :"<<address<<endl;
			cout<<"The Branch loacation is            :"<<location<<endl;
			cout<<"The Account Number is              :"<<accnum<<endl;
		}
		
		void unsucessfulwithdrawal()
		{
			cout<<"\n\t\t==========ATM ACCOUNT WITHDRAWAL=========="<<endl;
			cout<<"\nThe Name of thr Account Holder are :"<<name<<endl;
			cout<<"The Account Holder address is      :"<<address<<endl;
			cout<<"The Branch loacation is            :"<<location<<endl;
			cout<<"The Account Number is              :"<<accnum<<endl;
		   cout<<"\nInsufficent Available Balance in your account."<<endl;	
		   cout<<"\n\t\t\tSorry!!"<<endl;
		}
		
};

int main()
{
	ATM a1;
	a1.welcome();
	
	int c,pin;
	cout<<"\nEnter your choice :";
	cin>>c;
	
	if(c==1)
	{
		cout<<"\n===================================================================================================================="<<endl;
		cout<<"\nEnter your account pin for access Number! [Only one attempt is allowed] "<<endl;
		cin>>pin;
		a1.accountpin(pin);
		
	}
	
	else if(c==0)
	{
		a1.help();
	}
	else
	{
	  cout<<"Incorrect Input!!"<<endl;
	}
	
}
