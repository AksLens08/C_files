#include<stdio.h>
int main()
{
    int n,i,a[10], largestVallue, largestPOS, smallestValue, smallestPOS;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    largestVallue=a[0];
    smallestValue=a[0];
    for(i=1;i<n;i++)
    {
       if (largestVallue<a[i])
       {
           largestVallue=a[i];
           largestPOS=i;
       }
       if (smallestValue>a[i])
       {
           smallestValue=a[i];
           smallestPOS=i;
       }
    }
    int temp=a[largestPOS];
    a[largestPOS]=a[smallestPOS];
    a[smallestPOS]=temp;
    printf("The elements of the array after interchange are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
