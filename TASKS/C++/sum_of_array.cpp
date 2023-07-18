#include<iostream>
using namespace std;

int sum(int a[],int b[])
{
	for(int i=0;i<5;i++)
	{
		cout<<"\nSum of "<<i+1<<" Element : "<<a[i]+b[i]<<endl;
	}
	
	return 0;
}

int main()
{
	int a[5],b[5];
	
	cout<<"------Enter 5 Elements of First array--------";
	for(int i=0;i<5;i++)
	{
		cout<<"\nElement - "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"------Enter 5 Elements of Second array-------";
	for(int i=0;i<5;i++)
	{
		cout<<"\nElement - "<<i+1<<" : ";
		cin>>b[i];
	}
	
	
	cout<<"\n----------Sum of array----------- ";
	sum(a,b);
	
	return 0;
}
