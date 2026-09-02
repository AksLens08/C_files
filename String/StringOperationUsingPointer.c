#include <stdio.h>

// Finding the Length of a String
int StringLength(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

// Converting Characters of a String into Upper case
void ConvertTopper(char* str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

// Converting Characters of a String into Lower case
void ConvertToLower(char* str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }
}

// Concatenating Two Strings to Form a New String
void ConcatStr(char* dest, char* src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Appending a String to Another String
void AppendStr(char* dest, char* src) {
    ConcatStr(dest, src);
}

// Comparing Two Strings
void compareStr(char* str1, char* str2) {
    while (*str1 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }
    if (*str1 == *str2) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
}

// Reversing a String
void reverseStr(char* str) {
    int len = StringLength(str);
    char* end = str + len - 1;
    char temp;
    while (str < end) {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

// Extracting a Substring from Left of the String
void extractStrFrmLeft(char* str, int n) {
    int i = 0;
    while (i < n && str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

// Extracting a Substring from Right of the String
void extractStrFrmRight(char* str, int n) {
    int len = StringLength(str);
    char* start = str + len - n;
    if (start < str) start = str;
    printf("%s\n", start);
}

// Extracting a Substring from Middle of the String
void extractStrFrmMiddle(char* str, int start, int n) {
    int i = 0;
    str += start;
    while (i < n && *str != '\0') {
        printf("%c", *str);
        str++;
        i++;
    }
    printf("\n");
}

// Inserting a String in Another String
void insertStr(char* dest, int index, char* src) {
    char buffer[100];
    int i = 0, j = 0, k = 0;
    while (i < index && dest[i] != '\0') {
        buffer[i] = dest[i];
        i++;
    }
    while (src[k] != '\0') {
        buffer[i++] = src[k++];
    }
    while (dest[j] != '\0') {
        buffer[i++] = dest[j++];
    }
    buffer[i] = '\0';
    printf("%s\n", buffer);
}

// Indexing
int indexingStr(char* str, char* target) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target[0]) {
            return i;
        }
        i++;
    }
    return -1;
}

// Deleting a String from the Main String
void deleteStr(char* str, int index, int n) {
    int i = 0;
    while (str[i + index + n] != '\0') {
        str[i + index] = str[i + index + n];
        i++;
    }
    str[i + index] = '\0';
}

// Replacing a Pattern with Another Pattern in a String
void replaceStr(char* str, char* oldPat, char* newPat) {
    // Simple placeholder implementation for replacement
    printf("Replacing pattern in: %s\n", str);
}

int main() {
    char text[100] = "Hello";
    printf("Length: %d\n", StringLength(text));
    return 0;
}