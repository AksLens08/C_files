#include<stdio.h>

int arr[100];
int n,i;
int search;

int main()
{
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Element %d found at index %d\n", search);
            break;
        }
        else
        {
            printf("Element %d not found in the array\n", search);
            break;
        }
    }
    
    return 0;
}