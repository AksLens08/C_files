#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    char Lowerstr[100];
    int i=0;
    printf("Enter a string\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else
        {
            Lowerstr[i]=str[i];
        }
        i++;
    }
    printf("\n The string in lowercase is : %s",str);
    getch();
    return 0;
}