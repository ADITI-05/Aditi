/* switch case:        int %d    float %f   char %s %c  double %lf
     switch(expression){
     case1 : 
     printf();
     break;
     case 2 :
     printf();
	 break;
	 default:
	 printf();
	 break;
}
*/  

#include<stdio.h>
main()
{
	int num;
	printf("Enter your value :");
	scanf("%d", &num);
	switch(num)
	{
		case 1 :
		 printf("Monday.");
		 break;
		
		case 2 :
	     printf("Tuesday.");
		 break;
				
		case 3 :
		 printf("Wednesday.");
		 break;
					
		case 4 :
		 printf("Thursday.");
		 break;
						
		case 5 :
		 printf("Friday.");
		 break;
							
		case 6 :
		 printf("Saturday.");
		 break;
								
		case 7 :
		 printf("Sunday.");
		 break;
					
	    default :
		 printf("Invalid Input.");
		 break;
	}
}