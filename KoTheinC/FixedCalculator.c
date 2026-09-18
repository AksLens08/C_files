#include<stdio.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main()
{
    float num1, num2, result;
    char option;

    do
    {
        printf("Enter the option (+, -, *, / or q to quit): ");
        scanf(" %c", &option);

        if(option == 'q')
            break;

        printf("Enter the number 1: ");
        scanf("%f", &num1);

        printf("Enter the number 2: ");
        scanf("%f", &num2);

        switch(option)
        {
            case '+':
                result = addition(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case '-':
                result = subtraction(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case '*':
                result = multiplication(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case '/':
                result = division(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            default:
                printf("Invalid Option\n");
                break;
        }

    } while(option != 'q');

    printf("Thank you for using the calculator\n");

    return 0;
}

float addition(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    if(b == 0)
    {
        printf("Division by zero is not allowed\n");
        return 0;
    }

    return a / b;
}