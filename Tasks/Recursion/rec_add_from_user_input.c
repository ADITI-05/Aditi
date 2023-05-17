// WAP to take input a number between 1 to 100 and make addition of the num upto 100.

#include<stdio.h>
int sum(int n)
{
	if(n==100)
	{
		return n;
	}
	else
	{
		return n+sum(n+1);
	}
}

int main()
{
	int num;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("%d",sum(num));
	return 0;
}

