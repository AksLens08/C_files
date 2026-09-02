//#include <stdio.h>

int totalMarks = 450;//global variable

void displayMarks()
{
    printf("Total Marks = %d\n", totalMarks);
}

#include <stdio.h>

extern int totalMarks;
void displayMarks();

int main()
{
    printf("Before Update = %d\n", totalMarks);

    totalMarks += 50;

    displayMarks();

    return 0;
}
