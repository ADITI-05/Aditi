// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo).

#include <stdio.h>
main() {

  char op;
  int first, second;
  printf("Enter an operator (+, -, *, /, %): ");
  scanf("%c", &op);
  printf("Enter first value : ");
  scanf("%d", &first);
  printf("Enter second value : ");
  scanf("%d", &second);

  switch (op) {
    case '+':
      printf("%d + %d = %d", first, second, first + second);
      break;
    case '-':
      printf("%d - %d = %d", first, second, first - second);
      break;
    case '*':
      printf("%d * %d = %d", first, second, first * second);
      break;
    case '/':
      printf("%d / %d = %d", first, second, first / second);
      break;

    default:
      printf("Error! operator is not correct");
      break;
  }  
}
