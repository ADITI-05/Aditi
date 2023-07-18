/*  pyramid  *
            * *
           * * * 
          * * * *
         * * * * *
*/


#include<stdio.h>
int main()
{
	int i,j,m;
	for(j=1;j<=5;j++)
	{	
		for(i=1;i<=(5-j);i++)
		{
			printf(" ");
		}
		for(m=j;m<=(2*j-1);m++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
