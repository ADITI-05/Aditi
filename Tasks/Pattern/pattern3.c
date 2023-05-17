/*   * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
*/            


#include<stdio.h>
int main()
{
	// nested for loop
	int i,j;
    // outer loop
	for(j=0;j<=5;j++)
	{
		// inner loop
		for(i=0;i<5;i++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
