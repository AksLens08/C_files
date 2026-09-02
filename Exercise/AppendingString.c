#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char Dest_str[100],Source_str[100];
    int i=0,j=0;
    printf("\n Enter the first string:");
    gets(Source_str);
    printf("\n Enter the second string:");
    gets(Dest_str);
    while(Dest_str[i]!='\0')
    {
        i++;
    }
    while(Source_str[j]!='\0')
    {
        Dest_str[i]=Source_str[j];
        i++;
        j++;
    }
    Dest_str[i]='\0';
    printf("\n After appending, the destination string is:");
    puts(Dest_str);
    return 0;
}