#include<stdio.h>
#include<conio.h>
void main()
{
    char ch='A';
    int i;
    i = ch; //65
    printf("\n\nThe ASCII value of %c is %d", ch, i);
    printf("\n\nThe ASCII value of %c is %d", ch, ch);

    i = ch+10;
    printf("\n\nThe ASCII value of %c is %d", ch, i);
    printf("\n\nThe ASCII value of %c is %d", ch, ch+10);

    if (ch>='A' && ch<='Z')
    {
        printf("\n\n%c is an Uppercase letter", ch);
    }
    if (i>='A' && i<='Z')
    {
        printf("\n\n%c is an Uppercase letter", i);
    }
    getch();
}