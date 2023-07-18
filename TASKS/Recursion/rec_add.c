// Recursion : input from user and upto that number addition should be print.

#include<stdio.h>

int add(int n)
{
	if(n<=0)
	{
		return 0;
	}
	else
	{
		return n+add(n-1);
	}
}

int main()
{
	int num;
	
	printf("Enter number : ");
	scanf("%d", &num);
	
	printf("Addition of all numbers elements : %d",add(num));
	
	return 0;
}
