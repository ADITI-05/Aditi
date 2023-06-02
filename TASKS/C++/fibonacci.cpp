#include<iostream>

using namespace std;

int main()
{
	int c,n1=0,n2=1,n3;
	
	cout<<"Enter number of terms : " ;
	cin>>c;
	
	cout<<"Series : ";
	
	for(int i=0;i<c;i++)
	{
		cout<<n1<<" "; //print ans. after operation
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	
	return 0;
}
