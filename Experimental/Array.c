/*#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    char vowel[6] ="aeiou";
    for (int i = 0; i < 6; i++)
    {
        printf("%c\t", vowel[i]);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    char vowel[6] = {'a','e','i','o','u'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c,", vowel[i]);
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int marks[5];
    for (int i=0; i<5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", marks[i]);
    }
    return 0;
}