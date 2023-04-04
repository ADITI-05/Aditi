#include<stdio.h>
main()
{
	int i,value,num,totalsum=0;
	printf("how many number for total : ");
	scanf("%d",&value);
	
	for(i=1;i<=value;i++){
		printf("\nEnter number %d : ",i);
		scanf("%d",&num);
		totalsum+=num;  
	}
	  printf("\nTOTAL SUM OF YOUR ALL NUMBER IS = %d",totalsum);
}
