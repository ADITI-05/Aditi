// WAP to find number is even or odd using ternary operator.

#include<stdio.h>  
int main()  
{  
    int n;  
  
    printf("Enter an integer number\n");  
    scanf("%d", &n);  
  
    (n % 2 == 0)?printf("This is even number"):printf("This is odd number");
    
    return 0;
}  
