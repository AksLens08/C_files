#include <stdio.h>
#include <string.h>

int StringLength(char*);
void ConvertToUpper(char*);
void ConvertToLower(char*);
void ConcatStr(char*, char*);
void AppendStr(char*, char*);
void compareStr(char*, char*);
void reverseStr(char*);
void extractStrFrmLeft(char*, int);
void extractStrFrmRight(char*, int);
void extractStrFrmMiddle(char*, int, int);
void insertStr(char*, int, char*);
int indexingStr(char*, char*);
void deleteStr(char*, int, char*);
void replaceStr(char*, char*, char*);

int StringLength(char *str) {
    return strlen(str);
}

void ConvertToUpper(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

void ConvertToLower(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }
}

void ConcatStr(char *str1, char *str2) {
    strcat(str1, str2);
}

void AppendStr(char *str1, char *str2) {
    strcat(str1, str2);
}

void compareStr(char *str1, char *str2) {
    int diff = strcmp(str1, str2);
    if (diff == 0)
        printf("Strings are equal.\n");
    else if (diff < 0)
        printf("First string is smaller than the second.\n");
    else
        printf("First string is greater than the second.\n");
}

void reverseStr(char *str) {
    int len = strlen(str);
    char *end = str + len - 1;
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

void extractStrFrmLeft(char *str, int n) {
    char sub[100];
    int i = 0;
    while (i < n && *str != '\0') {
        sub[i++] = *str++;
    }
    sub[i] = '\0';
    printf("Extracted Substring (Left): %s\n", sub);
}

void extractStrFrmRight(char *str, int n) {
    int len = strlen(str);
    if (n > len) n = len;
    char *p = str + (len - n);
    printf("Extracted Substring (Right): %s\n", p);
}

void extractStrFrmMiddle(char *str, int start, int length) {
    char sub[100];
    int i = 0;
    str += start;
    while (i < length && *str != '\0') {
        sub[i++] = *str++;
    }
    sub[i] = '\0';
    printf("Extracted Substring (Middle): %s\n", sub);
}

void insertStr(char *str1, int pos, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char *p = str1 + len1;
    while (p >= str1 + pos) {
        *(p + len2) = *p;
        p--;
    }
    char *target = str1 + pos;
    while (*str2 != '\0') {
        *target++ = *str2++;
    }
}

int indexingStr(char *str1, char *str2) {
    char *p = strstr(str1, str2);
    if (p != NULL) {
        return (int)(p - str1);
    }
    return -1;
}

void deleteStr(char *str1, int pos, char *str2) {
    int len2 = strlen(str2);
    char *p = str1 + pos;
    char *src = str1 + pos + len2;
    while (*src != '\0') {
        *p++ = *src++;
    }
    *p = '\0';
}

void replaceStr(char *str, char *oldPat, char *newPat) {
    int idx = indexingStr(str, oldPat);
    if (idx != -1) {
        deleteStr(str, idx, oldPat);
        insertStr(str, idx, newPat);
    }
}

int main() {
    char str1[300];
    int i = 0, ch;

    printf("Enter a string for str1: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (i < sizeof(str1) - 1) {
            str1[i++] = (char)ch;
        }
    }
    str1[i] = '\0';

    char temp[300];

    printf("\nLength: %d\n", StringLength(str1));

    strcpy(temp, str1);
    ConvertToUpper(temp);
    printf("Upper Case: %s\n", temp);

    strcpy(temp, str1);
    ConvertToLower(temp);
    printf("Lower Case: %s\n", temp);

    strcpy(temp, str1);
    ConcatStr(temp, "Test");
    printf("Concatenated: %s\n", temp);

    strcpy(temp, str1);
    AppendStr(temp, "Appended");
    printf("Appended: %s\n", temp);

    printf("Comparison with 'MIITECE': ");
    compareStr(str1, "MIITECE");

    strcpy(temp, str1);
    reverseStr(temp);
    printf("Reversed: %s\n", temp);

    if (StringLength(str1) >= 3) {
        extractStrFrmLeft(str1, 3);
        extractStrFrmRight(str1, 3);
        extractStrFrmMiddle(str1, 1, 3);
    }

    strcpy(temp, str1);
    insertStr(temp, 0, "Hello ");
    printf("Inserted: %s\n", temp);

    printf("Index of 'I': %d\n", indexingStr(str1, "I"));

    strcpy(temp, str1);
    if (StringLength(temp) >= 1) {
        deleteStr(temp, 0, "M");
        printf("Deleted: %s\n", temp);
    }

    strcpy(temp, str1);
    replaceStr(temp, "I", "X");
    printf("Replaced: %s\n", temp);

    return 0;
}