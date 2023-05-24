// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5).

#include<stdio.h>
int main()
{
	int n,last,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>9)
	{
		n=n/10;
		sum=n+last;
	}
	printf("The sum is : %d",sum);
	
	return 0;
}
