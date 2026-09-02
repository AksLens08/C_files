#include<stdio.h>
void oddNum(int k);
void evenNum(int n);
void main()
{
    oddNum(1);
}

void oddNum(int n)
{
    if(n<=10)
    {
        if(n%2!=0)
        {
            printf("%d ",n);
        }
        evenNum(n+1);
    }
}

void evenNum(int n)
{
    if(n<=10)
    {
        if(n%2==0)
        {
            printf("%d ",n);
        }
        oddNum(n+1);
    }
}