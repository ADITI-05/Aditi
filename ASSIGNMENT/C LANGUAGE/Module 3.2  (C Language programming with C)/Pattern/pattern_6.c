/* Pattern 6 : A
               A B
               A B C
               A B C D 
               A B C D E
*/

#include<stdio.h>
main()
{
	int i,j;
	char alp = 'A';
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %c" , alp+j);
		}
		printf("\n");
	}
}
