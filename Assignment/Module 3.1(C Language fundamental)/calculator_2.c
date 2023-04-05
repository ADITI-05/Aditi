// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo).

#include <stdio.h>   
main()  
{  
    int num1,num2,ans;
    printf(" Enter first number : ");
    scanf("%d",&num1);
    printf(" Enter second number : ");
    scanf("%d",&num2);
    ans=num1+num2;
    printf("\n Addition is : %d ", ans);
    
    printf(" \n Enter first number : ");
    scanf("%d",&num1);
    printf("  Enter second number : ");
    scanf("%d",&num2);
    ans=num1-num2;
    printf("\n Substraction is : %d ", ans);
    
    printf(" \n Enter first number : ");
    scanf("%d",&num1);
    printf("  Enter second number : ");
    scanf("%d",&num2);
    ans=num1*num2;
    printf("\n Multiplication is : %d ", ans);
    
    printf(" \n Enter first number : ");
    scanf("%d",&num1);
    printf("   Enter second number : ");
    scanf("%d",&num2);
    ans=num1/num2;
    printf("\n Division is : %d ", ans);
    
    printf(" \n Enter first number : ");
    scanf("%d",&num1);
    printf("  Enter second number : ");
    scanf("%d",&num2);
    ans=num1%num2;
    printf("\n Modulo is : %d ", ans);
       
}  
