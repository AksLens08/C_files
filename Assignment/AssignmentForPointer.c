#include <stdio.h>

int StringLength(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

void ConvertToUpper(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;

        str++;
    }
}

void ConvertToLower(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + 32;

        str++;
    }
}

void ConcatStr(char *str1, char *str2)
{
    while (*str1 != '\0')
        str1++;

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

void AppendStr(char *str1, char *str2)
{
    ConcatStr(str1, str2);
}

void compareStr(char *str1, char *str2)
{
    while (*str1 != '\0' && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    if (*str1 == *str2)
        printf("Strings are equal.\n");
    else if (*str1 > *str2)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");
}

void reverseStr(char *str)
{
    char *left = str;
    char *right = str;
    char temp;

    while (*right != '\0')
        right++;

    right--;

    while (left < right)
    {
        temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

void extractStrFrmLeft(char *str, int count)
{
    char *ptr = str;

    while (*ptr != '\0' && count > 0)
    {
        ptr++;
        count--;
    }

    *ptr = '\0';
}

void extractStrFrmRight(char *str, int count)
{
    int length = StringLength(str);
    char *source;
    char *destination = str;

    if (count > length)
        count = length;

    source = str + length - count;

    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
}

void extractStrFrmMiddle(char *str, int start, int count)
{
    char *source = str + start;
    char *destination = str;

    while (*source != '\0' && count > 0)
    {
        *destination = *source;
        destination++;
        source++;
        count--;
    }

    *destination = '\0';
}

void insertStr(char *mainStr, int position, char *insertedStr)
{
    int mainLength = StringLength(mainStr);
    int insertLength = StringLength(insertedStr);
    char *source;
    char *destination;

    source = mainStr + mainLength;
    destination = source + insertLength;

    while (source >= mainStr + position)
    {
        *destination = *source;

        if (source == mainStr + position)
            break;

        source--;
        destination--;
    }

    source = insertedStr;
    destination = mainStr + position;

    while (*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }
}

int indexingStr(char *str, char *pattern)
{
    char *start;
    char *text;
    char *search;

    start = str;

    while (*start != '\0')
    {
        text = start;
        search = pattern;

        while (*text != '\0' &&
               *search != '\0' &&
               *text == *search)
        {
            text++;
            search++;
        }

        if (*search == '\0')
            return (int)(start - str);

        start++;
    }

    return -1;
}

void deleteStr(char *mainStr, int position, char *deleteValue)
{
    int deleteLength = StringLength(deleteValue);
    char *source;
    char *destination;

    source = mainStr + position;

    while (*deleteValue != '\0' && *source == *deleteValue)
    {
        source++;
        deleteValue++;
    }

    if (*deleteValue != '\0')
        return;

    source = mainStr + position + deleteLength;
    destination = mainStr + position;

    while ((*destination = *source) != '\0')
    {
        destination++;
        source++;
    }
}

void replaceStr(char *str, char *oldPattern, char *newPattern)
{
    int oldLength = StringLength(oldPattern);
    int newLength = StringLength(newPattern);
    int difference;
    char *position;
    char *source;
    char *destination;
    char *end;
    char *boundary;

    if (oldLength == 0)
        return;

    position = str;

    while (*position != '\0')
    {
        if (indexingStr(position, oldPattern) == 0)
        {
            difference = newLength - oldLength;

            if (difference > 0)
            {
                end = str;

                while (*end != '\0')
                    end++;

                source = end;
                boundary = position + oldLength;

                while (source >= boundary)
                {
                    *(source + difference) = *source;

                    if (source == boundary)
                        break;

                    source--;
                }
            }
            else if (difference < 0)
            {
                source = position + oldLength;
                destination = position + newLength;

                while ((*destination = *source) != '\0')
                {
                    destination++;
                    source++;
                }
            }

            source = newPattern;
            destination = position;

            while (*source != '\0')
            {
                *destination = *source;
                source++;
                destination++;
            }

            position += newLength;
        }
        else
        {
            position++;
        }
    }
}

int main(void)
{
    char str1[200] = "MIITECE";
    char str2[200] = "Programming II";

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n\n", str2);

    printf("1. Length = %d\n", StringLength(str1));

    ConvertToUpper(str1);
    printf("2. Upper Case = %s\n", str1);

    ConvertToLower(str1);
    printf("3. Lower Case = %s\n", str1);

    ConcatStr(str1, str2);
    printf("4. Concatenated String = %s\n", str1);

    AppendStr(str2, str1);
    printf("5. Appended String = %s\n", str2);

    printf("6. ");
    compareStr(str1, str2);

    reverseStr(str1);
    printf("7. Reversed String = %s\n", str1);

    extractStrFrmLeft(str1, 5);
    printf("8. Left 5 characters = %s\n", str1);

    extractStrFrmRight(str2, 5);
    printf("9. Right 5 characters = %s\n", str2);

    extractStrFrmMiddle(str2, 1, 4);
    printf("10. Middle 4 characters = %s\n", str2);

    insertStr(str1, 2, str2);
    printf("11. Insert String = %s\n", str1);

    printf("12. Indexing = %d\n", indexingStr(str1, str2));

    deleteStr(str1, 2, str2);
    printf("13. Deleting String = %s\n", str1);

    replaceStr(str1, str2, "ECE");
    printf("14. Replacing String = %s\n", str1);

    return 0;
}