#include <stdio.h>
#include <stdbool.h>

long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

long binomial_coefficient(int m, int x)
{
    if (x < 0 || x > m)
    {
        return 0;
    }

    if (x == 0 || x == m)
    {
        return 1;
    }

    return factorial(m) / (factorial(x) * factorial(m - x));
}

bool is_valid_input(int m, int x) 
{
    if (m < 0 || x < 0 || m < x) 
    {
        return false;
    }
    return true;
}

void calculate_and_print(int m, int x) 
{
    if (!is_valid_input(m, x)) 
    {
        printf("Invalid input! Ensure m >= x and both are non-negative.\n");
        return;
    }

    long result = binomial_coefficient(m, x);
    printf("B(%d, %d) = %ld\n", m, x, result);
}

int main() 
{
    int m, x;

    printf("Enter value for m: ");
    scanf("%d", &m);

    printf("Enter value for x: ");
    scanf("%d", &x);

    calculate_and_print(m, x);

    return 0;
}
