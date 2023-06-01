// WAP to take value from user of numbers to print and sum of that.

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	printf("%d \n",i);
	sum+=i;	
}
    printf("Addition of all : %d ",sum);
	return 0;
}
