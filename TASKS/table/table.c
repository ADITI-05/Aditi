// table 

#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter your number :");
	scanf("%d", &num);
	for(i=1;i<11;i++)
	{
	printf("%d * %d = %d \n",num,i,i*num);	
	}
	return 0;
}
