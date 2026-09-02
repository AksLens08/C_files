#include<stdio.h>
#define SIZE 500
int stringLength(char*);
void main(void)
{
    char string[SIZE];
    char *strptr;
    printf("Enter a string:");
    gets(string);
    strptr=string;
    printf("The length of the string is %d\n", stringLength(strptr));
}
int stringLength(char *strptr)
{
    int length=0;
    while(*strptr!='\0')
    {
        length++;
        strptr++;
    }
    return length;
}