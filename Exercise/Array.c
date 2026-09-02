#include<stdio.h>

void main()
{
    int arr[10];
    for (int i=0;i<10;i++)
   {
      printf("Enter a number at %d:",i+1);
      scanf("%d",&arr[i]);
   }
    printf("Given Numbers: ");
    for (int i=0;i<10;i++)
    {
      printf("%d ",arr[i]);
    }
    printf("\nEven Numbers: ");
    for (int i=0;i<10;i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd Numbers: ");
    for (int i=0;i<10;i++)
    {
        if (i% 2 != 0)
        {
            printf("%d ",arr[i]);
        }
    }
}