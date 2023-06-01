// WAP to make multiplication of two matrix using 2-D Array.

#include<stdio.h>
int main()
{
	int a[2][2],i,j,k;
	int b[2][2],re[2][2];
	
	// First array inputs
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("First array Elements [%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	
	// Second array inputs
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("second array Elements [%d][%d] : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	// Printing first array
	printf("\n=====First Array=====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	// Printing second array
	printf("\n=====Your Second Array=====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			re[i][j]=0;
			for(k=0;k<2;k++)
			{
				re[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n=====Multiplication of an array=====\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d  ",re[i][j]);
		}
		printf("\n");
	}
	return 0;
}
