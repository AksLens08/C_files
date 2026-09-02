#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, capCount = 0, smallCount = 0, spaceCount = 0, specialCount = 0, digitCount = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capCount++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            smallCount++;
        }
        else if (str[i] == ' ')
        {
            spaceCount++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digitCount++;
        }
        else if (str[i]=='$' || str[i]=='#' || str[i]=='!' || str[i]=='%' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+')
        {
            specialCount++;
        }
        else
            specialCount++;

        i++;
    }

    printf("Give string: ");
    puts(str);

    printf("\nNumber of Capital letter: %d", capCount);
    printf("\nNumber of SmallCap letter: %d", smallCount);
    printf("\nNumber of Space : %d", spaceCount);
    printf("\nNumber of Special Character : %d", specialCount);
    printf("\nNumber of Digit : %d", digitCount);

    return 0;
}