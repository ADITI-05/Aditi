// WAP to find fibonacci series.

#include<stdio.h>

int main()
{
	int i,n,a=0,b=1,c; // 0 and 1 are the first two numbers of fibonacci series
	
	printf("Enter a number for fibonacci series : ");
	scanf("%d",&n);
	
	printf("\nFibonacci series is : %d %d",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}	
	return 0;
}
