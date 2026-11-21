#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify_fraction(int *numerator, int *denominator)
{
    int g = gcd(*numerator, *denominator);

    *numerator = *numerator / g;
    *denominator = *denominator / g;
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
        printf("Invalid denominator!\n");
        return 1;
    }

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n",
           numerator, denominator);

    return 0;
}
