#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    printf("\n Size of Array = %d",sizeof(arr));
    printf("\n Size of Array[0] = %d",sizeof(arr[0]));
    printf("\n Size of pointer variable = %d",sizeof(ptr));
    return 0;
}