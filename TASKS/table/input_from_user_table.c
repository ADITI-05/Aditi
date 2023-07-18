// WAP take input from user and print table upto that

#include <stdio.h>
int main()
 {
  int i,j,a;
  printf("Enter an integer: ");
  scanf("%d", &a);

  for (i=1;i<=a;i++) 
  {
  	for(j=1;j<=10;j++)
	  {
	  	printf("%d * %d =  %d",i,j,i*j);
	  	printf("\n");
	  }
    printf("\n");
  }
  return 0;
}
