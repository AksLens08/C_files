#include<stdio.h>

void natNum(int num);
void main()
{
    oddNum(1);
}

void natNum(int num)
{
    if(num<=10)
    {
        natNum(num+1);
        printf("%d\t",num);
    }
}