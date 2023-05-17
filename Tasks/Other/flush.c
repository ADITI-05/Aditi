// fflush funtion to use. 

#include<stdio.h>
int main()
{
	int age,choice=1;
	char name[20];
	char ch;
	
	while(choice)
	{
	printf("Enter Name : ");
	scanf("%s", name);
	
	printf("Enter Age : ");
	scanf("%d", &age);
	
	fflush(stdin); // will release prevoius memory allocations and accept next std input
	
	printf("Do you want to continue ? ['y/n'] : ");
	scanf("%c",&ch);
	
	if(ch=='y' || ch=='Y')
	{
		choice==1;
	}
	else
	{
		printf("Thank you !!");
		choice==0;
		break;
	}
	}
	return 0;
}
