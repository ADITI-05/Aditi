// WAP to print number in reverse order e.g:number = 64728 ---> reverse = 82746. 

#include<stdio.h>
int main()
{
	int n,i,ld;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	printf("Reverse number is : ");
	for(i=1;n>0;i++)
	{
		ld = n%10;
		n = n/10;
		printf("%d",ld);
	}
	return 0;
}




