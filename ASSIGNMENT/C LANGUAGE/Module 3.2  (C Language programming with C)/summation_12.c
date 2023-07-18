// Write a program make a summation of given number (E.g., 1523 Ans: -11).

#include<stdio.h>
main()
{
	int i,value,num,totalsum=0;
	printf("How many number for total : ");
	scanf("%d",&value);
	
	for(i=1;i<=value;i++){
		printf("\nEnter number %d : ",i);
		scanf("%d",&num);
		totalsum+=num;  
	}
	  printf("\nTotal sum of your all number is = %d",totalsum);
}
