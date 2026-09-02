#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="MIIT ECE";
    char s2[20];
    strcpy(s2,s1);
    printf("\n\nString 1: %s", s1);
    printf("\n\nString 2: %s", s2);
}

void main()
{
    char s1[]="MIIT ECE";
    char s2[20]="ECE";
    char s3[20];
    strcpy(s2,s1);
    strcpy(s3,s2);
    printf("\n\nString 1: %s", s1);
    printf("\n\nString 2: %s", s2);
    printf("\n\nString 3: %s", s3);
}