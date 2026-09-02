#include<stdio.h>
void main()
{
    int A[]={1,2,3,4,5,6,7};
    function(A[3]);
    for(int i=0;i<7;i++)
    {
        printf("%d ",A[i]);
    }
    functionByEntireArray(&A[3]);
    functionByAddress(&A[3]);
    printf("After functionByAddress()\n");
    for (int i=0;i<7;i++)
    {
        printf("%d ",A[i]);
    }
}

void function(int num)
{
    printf("%d at function()", num);
    num=22;
    printf("\n %d at function() after\n", num);
}
void functionByAddress(int *num)
{
    printf("%d at functionByAddress()", *num);
    *num=22;
    printf("\n %d at functionByAddress() after\n", *num);
}
void functionByEntireArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]+1;
    }
}