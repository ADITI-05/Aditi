// WAP to 5 numbers of input from user and print sum of that.

#include<stdio.h>
int main()
{
	int i,n,sum;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter  number : ");
	    scanf("%d", &n);
	    sum+=n;
	}
	printf("Sum is %d",sum);
	return 0;
}
