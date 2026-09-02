#include <stdio.h>

void main() {
    int n, i, temp;
    int min = 0;
    int max = 0;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(i = 1; i < n; i++) {
        if(arr[i] < arr[min]) {
            min = i;
        }
        if(arr[i] > arr[max]) {
            max = i;
        }
    }

    temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;

    printf("The elemetns of the array after intercahnge are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
