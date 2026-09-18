#include<stdio.h>
int arr[100];
int n,i;
int main()
{
    printf("Enter number of elements to Compare: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for (int i = 0; i < n ; i++)
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    printf("The smallest number is: %d", smallest);
    return 0;
}