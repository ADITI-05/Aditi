// Matrix : Sum of 2D matrix.

#include<stdio.h>
int main()
{
	int p[2][2] ,q[2][2] ;
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&p[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&q[i][j]);
		}
	}
	printf("\n---------Your First array-----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	
	printf("\n---------Your second array-----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",q[i][j]);
		}
		printf("\n");
	}
	
	printf("\n---------Sum of Two Array-----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",p[i][j] + q[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
