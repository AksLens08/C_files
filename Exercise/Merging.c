#include <stdio.h>

int main() 
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};

    int n1 = 4; 
    int n2 = 5; 
    int totalSize = n1 + n2;
    
    int merged[9]; 

    int i = 0; 
    int j = 0; 
    int k = 0; 

    while (i < n1 && j < n2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            merged[k] = arr1[i];
            i++;
        } else 
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    
    while (j < n2) 
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged and Sorted Array:\n");
    for (int m = 0; m < totalSize; m++) 
    {
        printf("%d ", merged[m]);
    }
    printf("\n");

    return 0;
}