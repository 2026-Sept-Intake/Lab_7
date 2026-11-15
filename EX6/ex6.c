#include <stdio.h>
#include <stdlib.h>

void simplify_fraction(int *numerator, int *denominator);

int main()
{
    int numerator, denominator;

    printf("Enter numerator: ");
    scanf("%d", &numerator);

    printf("Enter denominator: ");
    scanf("%d", &denominator);

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}

void simplify_fraction(int *numerator, int *denominator)
{
    int a = abs(*numerator);
    int b = abs(*denominator);
    int gcd, temp;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    *numerator = *numerator / gcd;
    *denominator = *denominator / gcd;
}
