// WAP to swap two numbers without using third variable.

#include<stdio.h>  
int main()   
{   
  int  a,b;  
  printf("Enter the value of a :");  
  scanf("%d",&a);
  printf("Enter the value of b :");  
  scanf("%d",&b);
    
  a = a + b;   
  b = a - b;    
  a = a - b; 
  
  printf("\nAfter swapping value of b is: %d",a);
  printf("\nAfter swapping vlaue of b is: %d",b);
  
  return 0;  
}  
