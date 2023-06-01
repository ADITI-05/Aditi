// Write a program make a summation of given number (Eg: 1523 Ans: -11).

#include<stdio.h>
int main()
{
	int i,value,num,totalsum;
	printf("Enter Numbers : ");
	scanf("%d",&value);
	
	for(i=1;i<=value;i++){
		printf("\nEnter number %d : ",i);
		scanf("%d",&num);
		totalsum+=num;  
	}
	  printf("\nSum of number is = %d",totalsum);
}
