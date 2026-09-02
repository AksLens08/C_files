#include <stdio.h>

int main() 
{
    int arr[100], n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0) 
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i++; 
        } 
    }

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}