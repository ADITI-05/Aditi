// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo).

#include <stdio.h>
main() {

  char op,m;
  int first, second;
  printf("Enter an operator (+, -, *, /, m): ");
  scanf("%c", &op);
  printf("Enter first value : ");
  scanf("%d", &first);
  printf("Enter second value : ");
  scanf("%d", &second);

  switch (op) {
    case '+':
      printf("Total Addition = %d", first + second);
      break;
    case '-':
      printf("Total Substraction = %d", first - second);
      break;
    case '*':
      printf("Total Multiplication = %d", first * second);
      break;
    case '/':
      printf("Total Division = %d", first / second);
      break;
    case 'm':
      printf("Total Reminder = %d",first % second);
      break;
      
    default:
      printf("Error! operator is not correct");
      break;
  }  
}
