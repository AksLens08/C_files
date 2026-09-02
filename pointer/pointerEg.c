#include <stdio.h>
int main()
{
    int test_array[] = {10, 20, 30};
    int *ptr = test_array;
    printf("\n Same address for ptr :%d \t test: %d \n", ptr, test_array);
    for (int i = 0; i < sizeof(test_array) / sizeof(test_array[0]); i++)
    {
        printf("\n ptr[%d] = %d", i, ptr[i]); // print the array by incrementing index
    }
    printf("\n");
    for (int i = 0; i < sizeof(test_array) / sizeof(test_array[0]); i++)
    {
        printf("\n*(ptr+%d) = %d", i, *(ptr + i));
    }
    printf("\n");
    for (int i = 0; i < sizeof(test_array) / sizeof(test_array[0]); i++)
    {
        printf("\n%d[ptr] = %d", i, i[ptr]); // this will also print elements of array
    }
    printf("\n");
    for (int i = 0; i < sizeof(test_array) / sizeof(test_array[0]); i++)
    {
        printf("\n Address of the array elements = %d", ptr + i); // this will print address of all the array elements
    }
    printf("\n\nPrint value of test_array[0] only");
    printf("\t%d\n", *ptr);
    ptr++;
        printf("\n\nPrint value of test_array[1] only");
        printf("\t%d\n", *ptr);
    ptr++;
        printf("\n\nPrint value of test_array[2] only");
        printf("\t%d\n", *ptr);
    return 0;
}