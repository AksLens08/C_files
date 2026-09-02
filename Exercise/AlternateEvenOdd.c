#include<stdio.h>
#include<stdbool.h>

int Fact(int n);
int binomial_coefficient(int m, int x);
bool is_valid(int m, int x);

int main()
{
    int m, x, result;
    
    printf("\nEnter value for m: ");
    scanf("%d", &m);
    
    printf("\nEnter value for x: ");
    scanf("%d", &x);
    
    if (!is_valid(m, x)) 
    {
        printf("\nInvalid input! Ensure m >= x and both are non-negative.");
        return 1;
    }
    
    result = binomial_coefficient(m, x);
    printf("\nB(%d, %d) = %d", m, x, result);
    
    return 0;
}

bool is_valid(int m, int x)
{
    if (m < 0 || x < 0 || m < x)
        return false;
    else
        return true;
}

int Fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return (n*Fact(n-1));
}

int binomial_coefficient(int m, int x)
{
    if (x == 0 || x == m)
        return 1;
        
    return Fact(m) / (Fact(x) * Fact(m - x));
}
