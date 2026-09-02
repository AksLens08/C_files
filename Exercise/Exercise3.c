#include<stdio.h>
#include<stdbool.h>

int index=1;
int sumEven=0;
int sumOdd=0;

void main()
{
    sum(83765);
    printf("Sum numbers of even is %d", sumEven);
    printf("Sum number of odd is %d", sumOdd);
}

void sum(int n)
{
    int d=n%10;
    if (n>0)
    {
        if (index%2==0) sumEven+=d;
        else sumOdd+=d;
        index++;
        sum(n/10);
    }
}