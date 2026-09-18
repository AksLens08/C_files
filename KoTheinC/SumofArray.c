#include<stdio.h>

int sum=0,n;
int arr[100];
int i;

int main()
{
    printf("Enter number of elements to add: ");
    scanf("%d", &n);
    for (int i=0; i<n ; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d", &arr[i]);
        sum= sum+arr[i];
    }
    printf("Sum of numbers: %d " ,sum);
    return 0;
}