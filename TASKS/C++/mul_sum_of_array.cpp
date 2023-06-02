#include<iostream>
using namespace std;

int main()
{
	int a[3][2],b[2][3];
	int c[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter first array elements ["<<i+1<<"]"<<"["<<j+1<<"] : ";
			cin>>a[i][j];
		}
	}
	
	cout<<endl;
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"Enter second array elements ["<<i+1<<"]"<<"["<<j+1<<"] : ";
			cin>>b[i][j];
		}
	}
	
	cout<<"\n------First matrix--------\n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\n------Second matrix--------\n";
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<b[i][j];
		}
		cout<<endl;
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=0;
			for(int k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	cout<<"\n------Resultant matrix--------\n";
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
	return 0;
}
