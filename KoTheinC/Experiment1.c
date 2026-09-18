#include<stdio.h>
int main()
{
    int myAge=19;
    int *ptr=&myAge;
    
    printf("Value of myAge: %d\n",myAge);
    printf("Memory Address of myAge: %p\n",&myAge);
    printf("Memory Address with pointer: %p\n",ptr);
    printf("Value with pointer: %p\n",*ptr);

    return 0;
}