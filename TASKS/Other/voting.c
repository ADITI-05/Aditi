// WAP to find who is eligible for voting (if else condition)

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
	 printf("You are eligible for voter ID.");	
	}
	else
	{
	 printf("You are below 18 years.");
	}
	return 0;
}
