#include<stdio.h>
void main()
{
    char a;
    //char a[100];
    //printf("Enter a string: ");
    printf("Enter a character: ");
    //scanf("%s", a);
    //printf("You entered: %s", a);(scanf will only read till space)
    a = getchar();
    printf("You entered %c ", a);
    //printf("You entered: %s", a);
    //printf("You entered %c ", getchar());
}