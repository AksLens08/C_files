#include<stdio.h> 
#include<string.h>

char comparestr (char str1[], char str2[])
{
    int len1=strlen(str1);
    int i=0;
    char eq='T';
    while (i<len1)
    {
        if (str1[i] != str2[i]);
        {
            eq='F';
            break;
        }
        i++;
    }
    return eq;
}

void main()
{
    char str[100],revstr[100];
    int i=0,k;
    printf("\n Enter the text ");
    gets(str);
    k=strlen(str)-1;
    while(str[i]!='\0');
    {
        revstr[k]=str[i];
        i++;k--;
    }
    revstr[i]='\0';
    char ch=comparestr(str, revstr);
    if (ch=='T') printf("\nPalindrome");
    else printf("\nNot Palidrome");
}
