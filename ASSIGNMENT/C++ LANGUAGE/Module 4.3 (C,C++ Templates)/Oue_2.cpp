// Write a program of to sort the array using templates.

#include<iostream>
using namespace std;

template<typename T>
class A
{
	public:
		T i,j, a[10],temp;
		void input()
		{
			cout<<"Enter 10 values"<<endl;
			for(i=0;i<10;i++)
			{
				cout<<"Enter values : ";
				cin>>a[i];
			}
		}
		void display()
		{
			cout<<endl<<"Sorted array is (ascending order) : ";
			for(i=0;i<10;i++)
			{
				for(j=i+1;j<10;j++)
				{
					if(a[i]>a[j])
					{
						temp =a[i];
						a[i] =a[j];
						a[j] =temp;
					}
				}
			}
			for(i=0;i<10;i++)
			{
				cout<<endl<<a[i];
			}
		}
};
int main()
{
	A<int> obj;
	obj.input();
	obj.display();
}

