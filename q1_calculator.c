/*
1. Develop a program to solve simple computational problems using arithmetic expressions and the use of each operator leading to the simulation of a commercial calculator (No built-in math function).
*/

#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("The result of %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("The result of %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("The result of %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
            printf("The result of %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero!\n");
        break;
    case '%':
        if ((int)num2 != 0)
        {
            result = (int)num1 % (int)num2;
            printf("The result of %.0lf %% %.0lf = %.0lf\n", num1, num2, result);
        }
        else
            printf("Error: Division by zero!\n");
        break;
    default:
        printf("Invalid operator!\n");
    }
    return 0;
}