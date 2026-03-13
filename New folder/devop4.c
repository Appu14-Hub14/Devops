#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    int num, original, remainder, result = 0;

    // Fibonacci Series
    printf("Enter number of terms for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    // Armstrong Number Check
    printf("\n\nEnter a number to check Armstrong: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num = num / 10;
    }

    if(result == original)
        printf("It is an Armstrong number.");
    else
        printf("It is not an Armstrong number.");

    return 0;
}