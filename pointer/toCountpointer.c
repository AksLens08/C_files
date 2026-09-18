#include<stdio.h>

int toCount(char *str1)
{
    int b;
    for (b=0; *str1 != '\0'; b++)
    {
        str1++;
    }
    return b;
}
int main()
{   
    int a,b,c,d;
    char arr[3][255];
    printf("Enter 3 strings:\n");
    for (int i = 0; i < 3; i++)
    {
        gets(arr[i]);
    }
    b=toCount(arr[0]);
    c=toCount(arr[1]);
    d=toCount(arr[2]);
    printf("Number of character: %d\n",b);
    printf("Number of character: %d\n",c);
    printf("Number of character: %d\n",d);  

    return 0;
}