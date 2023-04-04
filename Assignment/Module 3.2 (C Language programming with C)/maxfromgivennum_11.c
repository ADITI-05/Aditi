#include<stdio.h>
main()
{
	
	int i,a,x,max=0;
	
	printf("Choose Your Value : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
	    printf("\nEnter value no.%d : ",i);
	    scanf("%d",&x);
        if(x > max)       
       	{                  
	      	max=x;         
	    }
	}
    printf("\n\nmaximum value is : %d",max); 
}
