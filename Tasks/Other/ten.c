// WAP to print 10 num and at 5 th value hello should be print.

#include<stdio.h>
int main()
{
	int i=1;
	
	my_point:
	for(;i<=10;i++)
	{
		if(i==5){
			printf("Hello\n");
			continue;
		goto my_point;
	}
	else
	{
		printf("%d\n",i);
	}
}
return 0;
}
