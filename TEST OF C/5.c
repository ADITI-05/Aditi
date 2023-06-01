// Write a program to find out the max from given number (Eg: -1562 Max number is 6).

#include<stdio.h>
int main()
{
	int n,i,ld;
	int max=0;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		ld=n%10;
		if(ld>max)
		{
			max=ld;
		}
		n=n/10;
	}
	printf("Maximum number is : %d",max);
	return 0;
}



