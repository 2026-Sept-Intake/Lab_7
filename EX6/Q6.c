#include <stdio.h>
#include <stdlib.h>

void simplify_fraction(int *numerator, int *denominator)
{
    int a = abs(*numerator);
    int b = abs(*denominator);
    int gcd;

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    *numerator = *numerator / gcd;
    *denominator = *denominator / gcd;
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
    }
    else
    {
        simplify_fraction(&numerator, &denominator);

        printf("Simplified Fraction: %d/%d\n",
               numerator, denominator);
    }

    return 0;
}
