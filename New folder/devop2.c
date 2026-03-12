#include <stdio.h>

// Function to find factorial using recursion
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to find sum of digits using recursion
int sumDigits(int n)
{
    if(n == 0)
        return 0;
    else
        return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));
    printf("Sum of digits of %d = %d\n", num, sumDigits(num));

    return 0;
}