#include <stdio.h>
int main() 
{
    FILE *fptr;
    fptr = fopen("sample.txt", "w");
    char name[] = "Aung Aung";
    int age = 17;
    float mark = 85.5;
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);
    fprintf(fptr, "Mark: %.1f\n", mark);
    fclose(fptr);
    return 0;
}