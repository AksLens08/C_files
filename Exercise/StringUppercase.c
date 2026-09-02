#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    char Upperstr[100];
    int i=0;
    printf("Enter a string\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
        {
            Upperstr[i]=str[i];
        }
        i++;
    }
    printf("\n The string in uppercase is : %s",str);
    getch();
    return 0;
}