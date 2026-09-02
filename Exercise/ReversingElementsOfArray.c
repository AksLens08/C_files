#include<stdio.h>
int main()
{
    int n,i,j,a[20],b[20];
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //Traversal operation
    printf("Original array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n ",a[i]);
    }

    //Reversing Operation
    for (i=n-1,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
        
    }

    //copying reversed
    //copying operation
    for (i=0;i<n;i++)
    {
        a[i]=b[i];
    }

    //Traversal operation
    printf("Reversed array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n ",a[i]);
    }
    return 0;
}