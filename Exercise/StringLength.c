#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i=0,length;
    printf("Enter a string\n");
    gets(str);
    printf("\n i=%d\n",i);
    while(str[i]!='\0')
    {
        i++;
    }
    length=i;
    printf("\n The length of the string[%s]is : %d",str,length);
    getch();
    return 0;
}