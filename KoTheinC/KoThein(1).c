#include<stdio.h>
int addtion(int a , int b);
int subtraction(int a , int b);
int multiplication(int a , int b);
int division(int a , int b);
int main()
{
        int num1 , num2,result;
        char option; 

        do
        {

        printf("Enter the option : ");
        scanf(" %c",&option);   
           printf("Enter the number 1 : ");
        scanf(" %d",&num1);

        printf("Enter the number 2 : ");
        scanf(" %d",&num2);


       switch (option)
       {
       case '+' : //if (option == 1)
        result = addtion(num1 , num2);
        printf("Result : %d\n",result);
        break;       
       case '-':
        result = subtraction(num1 , num2);
        printf("Result : %d\n",result);
        break;

       case '*':
        result = multiplication(num1 , num2);
        printf("Result : %d\n",result);
        break;

       case '/':
        result = division(num1 , num2);
        printf("Result : %d\n",result);
        break;
       
       default:
        printf("Invalid Option\n");
        break;
       }
        } while (option != 'q');
        
        printf("Thank you for using the calculator\n");
        return 0;
              
}

int addtion(int a , int b)
{
        return a + b;
}
int subtraction(int a , int b)
{
        return a - b;
}
int multiplication(int a , int b)
{
        return a * b;
}
int division(int a , int b)
{
        if(b == 0)
        {
                printf("Division by zero is not allowed\n");
                return 0; // Return 0 or handle the error as needed
        }
        return a / b;
}