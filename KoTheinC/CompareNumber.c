#include<stdio.h>

float num[10];
int i,n;

float findLargest(float number1, float number2);

int main()
{
    printf("Enter total number to compare: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%f",&num[i]);
    }

    for(i=1; i<n; i++)
    {
        num[0] = findLargest(num[0],num[i]);
    }

    printf("Largest number = %.3f",num[0]);

    return 0;
}

float findLargest(float number1, float number2)
{
    if(number1 > number2)
        return number1;
    else
        return number2;
}