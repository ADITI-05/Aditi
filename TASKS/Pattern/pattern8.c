/* 1
   1 1
   1 1 1
   1 1 1 1
*/


#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" 1 ");
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
