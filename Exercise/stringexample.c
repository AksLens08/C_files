#include<stdio.h>
#include<conio.h>
void main()
{
    char str[]="Introduction to C";
    printf("\n\n|%s|", str);
    printf("\n\n|%20s|", str);
    printf("\n\n|%-20s|", str);
    printf("\n\n|%.4s|", str);
    printf("\n\n|%20.4s|", str);
    printf("\n\n|%-20.4s|", str);
}