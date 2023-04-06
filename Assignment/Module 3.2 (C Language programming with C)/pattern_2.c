#include<stdio.h>
main()
{
	int i,j;
	char alp = 'A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c" , alp++);
		}
		printf("\n");
	}
}
