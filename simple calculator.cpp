#include <stdio.h>

int main()
 {
  double num1, num2;
  char oparator;

  printf("Enter two numbers and an operator (+, -, *, /): ");
  scanf("%lf %lf %c", &num1, &num2, &oparator);

  switch (oparator)
   {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);  
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;
    case '/':
      if (num2 == 0) {
        printf("Error: Cannot divide by zero");
      } else {
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      }
      break;
    default:
      printf("Error: Invalid operator");
  }

  return 0;
}

