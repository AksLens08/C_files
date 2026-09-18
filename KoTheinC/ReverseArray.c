#include<stdio.h>
int n,arr[100];
int main()
{
    printf("Enter number of elements to reverse: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
       for (int j=n-1; j>=0; j--)
        {
            printf("%d ", arr[j]);
        }
    return 0;
}