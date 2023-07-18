#include<iostream>
using namespace std;

int main()
{
	int n,a=0;
	
	cout<<"Enter your number to find that it is prime or not : ";
	cin>>n;
	
	for(int i=2;i<n-1;i++)
	{
		if(n%i == 0)
		{
			a=1;
			break;
		}
	}
	if(a==1)
	{
		cout<<"\n"<<n<<" Number is not Prime Number.\n";
	}
	else if(n==0 || n==1)
	{
		cout<<"\n"<<n<<" Number is Not Prime not Consonant Number\n";
	}
	else
	{
		cout<<"\n"<<n<<" Number is Prime Number.";
	}
	return 0;
}
