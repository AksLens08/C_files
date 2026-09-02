#include<stdio.h>
int main()
{
    char str[]="Hello";
    char *pstr;
    pstr=str;
    printf("\n The string is ");
    while (*pstr != '\0')
    {
        printf("%c",*pstr);
        pstr++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char str[]="Hello";
    char *pstr;
    pstr=str;
    printf("\n The string is ");

    puts(pstr);

    return 0;
}