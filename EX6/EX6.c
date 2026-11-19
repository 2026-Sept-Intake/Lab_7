#include <stdio.h>

void simplify_fraction(int *numerator, int *denominator)
{
    int a = *numerator;
    int b = *denominator;
    int gcd;

    while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }

    *numerator = *numerator / a;
    *denominator = *denominator / a;
}

int main()
{
    int numerator, denominator;

    printf("Enter numerator: ");
    scanf("%d", &numerator);

    printf("Enter denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0)
    {
        printf("Error: Denominator cannot be zero.\n");
        return 1;
    }

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}
