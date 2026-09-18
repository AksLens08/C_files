#include<stdio.h>

int main()
{
    int year;

    while(1)
    {
        printf("Enter a year: ");
        if(scanf("%d", &year) != 1 || year <= 0)
        {
            printf("Invalid input. Enter a valid year.\n");
            while(getchar() != '\n');
        }
        else
        {
            break;
        }
    }

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    return 0;
}