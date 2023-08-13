#include <stdio.h>

int main() 
{
    double num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double result;

    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
            } 
            else
            {
                printf("Error: Division by zero!\n");
                return 1; 
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 1; 
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0; 
}