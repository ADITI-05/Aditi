// WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main()
{
	int year;
	printf(" Please Enter any year you wish :");
	scanf("%d", &year);
	
	// leap year if perfectly divisible by 400 and 4
	if(year % 400 == 0)
	{
		printf("%d is a leap year.",year);
	}
	else if(year % 100 == 0)
	{
		printf("%d is not a leap year.",year);
	}
	else if(year % 4 == 0)
	{
		printf("%d is a leap year.",year);
	}
	else
	{
		printf("%d is not a leap year.",year);
	}
	return 0;
}
