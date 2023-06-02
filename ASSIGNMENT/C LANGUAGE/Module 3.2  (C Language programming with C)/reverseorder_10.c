// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746.

#include<stdio.h>

int main()
{
	int a,i,j;
	
	printf("Enter number : ");
	scanf("%d",&a);
	
	printf("\nNumber in reverse order : ");
	
	for(i=1;a>0;i++)
	{
		j = a%10;
		printf("%d",j);
		a = a/10;
	}
	return 0;
}
