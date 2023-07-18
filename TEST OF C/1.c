// WAP to swap two numbers without using third variable. 

#include<stdio.h>  
int main()   
{   
  int  a,b;  
  printf("Enter value of a : ");  
  scanf("%d",&a);
  
  printf("Enter value of b : ");  
  scanf("%d",&b);
  
  // for swapping  
  a = a + b;   
  b = a - b;    
  a = a - b; 
  
  printf("\nAfter swapping value of a is : %d",a);
  printf("\nAfter swapping value of b is : %d",b);
  
  return 0;  
}  
