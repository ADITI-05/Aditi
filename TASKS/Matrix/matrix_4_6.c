// Matrix : a[4] [6].

#include<stdio.h>

int main()
{
	int a[4][6];
	int i,j;
	
    for(i=0;i<4;i++)
    {
    	for(j=0;j<6;j++)
    	{
    	 printf("Enter Elements : ");
	     scanf("%d",&a[i][j]);	
		}	
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}




