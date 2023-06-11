// Sorted array (ascending order).

#include<iostream>
using namespace std;

int main()
{
	int a[5]={12,34,5,6,7};
	int temp=0;
	
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted array in ascending order : "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
