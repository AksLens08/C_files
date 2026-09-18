#include<stdio.h>
int main()
{
    int n, even = 0, odd = 0,Zero_count=0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements %d: ", i + 1);
        scanf("%d", &arr[i]);

       if (arr[i] == 0)
            Zero_count++;
        else if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    printf("Zero numbers: %d\n", Zero_count);
    return 0;
}