// print char in function.

#include<iostream>
using namespace std;

void task(char ch,int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<ch<<" ";
	}
}
int main()
{
	char ch;
	int n;
	
	cout<<"Enter any Alphabet : ";
	cin>>ch;
	
	cout<<"Enter any Integer : ";
	cin>>n;
	
	task(ch,n);
	
	return 0;
}
