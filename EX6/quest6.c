#include <stdio.h>
#include <stdlib.h>
void simplify_fraction(int *numerator, int *denominator)
{
    int x = abs(*numerator);
    int y = abs(*denominator);
    int gcd, temp;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    *numerator = *numerator / gcd;
    *denominator = *denominator / gcd;
}

int main()
{
    int numerator, denominator;
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    printf("Enter the denominator: ");
    scanf("%d", &denominator);
    if (denominator == 0)
    {
        printf("Denominator cannot be zero.\n");
    }
    else
    {
        simplify_fraction(&numerator, &denominator);
        printf("Simplified Fraction: %d/%d\n", numerator, denominator);
    }
    return 0;
}

