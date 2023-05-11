// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo). Using switch case

#include <stdio.h>
int main() {

  char sign;
  int num1, num2;
  printf("Enter an operator (+, -, *, /, m) : ");
  scanf("%c", &sign);
  printf("Enter first value : ");
  scanf("%d", &num1);
  printf("Enter second value : ");
  scanf("%d", &num2);

  switch (sign) {
  	case '+':
      printf("Total Addition = %d", num1 + num2);
      break;
    case '-':
      printf("Total Substraction = %d", num1 - num2);
      break;
    case '*':
      printf("Total Multiplication = %d", num1 * num2);
      break;
    case '/':
      printf("Total Division = %d", num1 / num2);
      break;
    case 'm':
      printf("Total Reminder(modulo) = %d ",num1 % num2);
      break;
      
    default:
      printf("Error! operator is not correct");
      break;
  }
  return 0;
}
