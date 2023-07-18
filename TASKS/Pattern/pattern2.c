/*   * * * * *
     * * * * *
     * * $ * *
     * * * * *
     * * * * *
*/


#include<stdio.h>
int main()
{
	int i,j;
	for(j=0;j<5;j++)
	{	
		for(i=0;i<5;i++)
		{
			if(i==2 && j==2)
			{
				printf(" $ ");
			}
			else
			{
				printf(" * ");
	       }		
		}	
		printf("\n");
	}
	return 0;
}
