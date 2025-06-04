// A Somewhat Simple Calculatorr by Viper

#include <stdio.h>

int main()
{
  int menu;
  float num1 ,num2, result; 

  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplacation\n");
  printf("4. Division\n\n");

  printf("Enter Number:   ");
  scanf("%d", &menu);

  printf("\n");

  switch(menu)

  {

  case 1:

    printf("You Entered Addition\n\n");

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\n");

    result = num1 + num2;

    printf("%.2f + %.2f = %.2f\n", num1, num2, result);
    break;

   case 2:

    printf("You Entered Subtraction\n\n");

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\n");

    result = num1 - num2;

    printf("%.2f - %.2f = %.2f\n", num1, num2, result);
    break;

    case 3:

    printf("You Entered Multiplication\n\n");

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\n");

    result = num1 * num2;

    printf("%.2f * %.2f = %.2f\n", num1, num2, result);
    break;

    case 4:

    printf("You Entered Divison\n\n");

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\n");

    result = num1 / num2;

    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
    break;
   
    default:
       printf("Enter Correct Number e.g 1 - 4\n");
       break;
  }

return 0;
}