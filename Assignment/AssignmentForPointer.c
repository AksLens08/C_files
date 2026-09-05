#include <stdio.h>
#include <string.h>

int StringLength(char *str)
{
    return strlen(str);
}

void ConvertToUpper(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;

        str++;
    }

    printf("Upper Case = %s\n", str - strlen(str));
}

void ConvertToLower(char *str)
{
    char *p = str;

    while (*p != '\0')
    {
        if (*p >= 'A' && *p <= 'Z')
            *p = *p + 32;

        p++;
    }

    printf("Lower Case = %s\n", str);
}

void ConcatStr(char *str1, char *str2)
{
    char result[200];

    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated String = %s\n", result);
}

void AppendStr(char *str1, char *str2)
{
    strcat(str1, str2);

    printf("Appended String = %s\n", str1);
}

void compareStr(char *str1, char *str2)
{
    int x = strcmp(str1, str2);

    if (x > 0)
        printf("First string is greater.\n");
    else if (x < 0)
        printf("Second string is greater.\n");
    else
        printf("Both strings are equal.\n");
}

void reverseStr(char *str)
{
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed String = %s\n", str);
}

void extractStrFrmLeft(char *str, int n)
{
    char result[100];

    strncpy(result, str, n);
    result[n] = '\0';

    printf("Left %d characters = %s\n", n, result);
}

void extractStrFrmRight(char *str, int n)
{
    int len = strlen(str);

    printf("Right %d characters = %s\n", n, str + len - n);
}

void extractStrFrmMiddle(char *str, int pos, int n)
{
    char result[100];

    strncpy(result, str + pos, n);
    result[n] = '\0';

    printf("Middle characters = %s\n", result);
}

void insertStr(char *str, int pos, char *insert)
{
    char result[200];

    strncpy(result, str, pos);
    result[pos] = '\0';

    strcat(result, insert);
    strcat(result, str + pos);

    printf("Inserted String = %s\n", result);
}

int indexingStr(char *str, char *pattern)
{
    char *p = strstr(str, pattern);

    if (p != '\0')
        return p - str;

    return -1;
}

void deleteStr(char *str, int pos, char *del)
{
    int len = strlen(del);

    if (strncmp(str + pos, del, len) == 0)
    {
        memmove(str + pos, str + pos + len,
                strlen(str) - pos - len + 1);

        printf("Deleted String = %s\n", str);
    }
    else
    {
        printf("String not found at position %d.\n", pos);
    }
}

void replaceStr(char *str, char *old, char *newStr)
{
    char result[200];
    char *p = strstr(str, old);

    if (p != '\0')
    {
        strncpy(result, str, p - str);
        result[p - str] = '\0';

        strcat(result, newStr);
        strcat(result, p + strlen(old));

        strcpy(str, result);
    }

    printf("Replaced String = %s\n", str);
}

int main()
{
    char str1[200] = "MIIT ECE";
    char str2[100] = "Programming II";
    char original[200];
    char work[200];

    int index;

    strcpy(original, str1);

    printf("First String = %s\n", original);
    printf("Second String = %s\n\n", str2);

    printf("1. Length = %d\n", StringLength(original));

    strcpy(work, original);
    ConvertToUpper(work);

    strcpy(work, original);
    ConvertToLower(work);

    ConcatStr(original, str2);

    strcpy(work, original);
    AppendStr(work, str2);

    compareStr(original, str2);

    strcpy(work, original);
    reverseStr(work);

    extractStrFrmLeft(original, 3);

    extractStrFrmRight(original, 8);

    extractStrFrmMiddle(original, 5, 1);

    insertStr(original, 8, "CSE");

    index = indexingStr(original, "ECE");
    printf("Index = %d\n", index);

    strcpy(work, original);
    deleteStr(work, 5, "ECE");

    strcpy(work, original);
    replaceStr(work, "ECE", "CSE");

    return 0;
}