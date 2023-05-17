/*        *
        * *
      * * *
    * * * *
*/


#include <stdio.h>
int main()
{
  int i,j,m;
  for(i=1;i<=4;i++)
  {
  	for(j=1;j<=(4-i);j++)
  	{
  	 printf(" ");
	}
	for(m=1;m<=i;m++)
	{
		printf("*");
	}
	printf("\n");
  }
  return 0;
}  
