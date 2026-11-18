#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    a = (int) fabs((double) a);
    b = (int) fabs((double) b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Reduces the fraction to its simplest form.

void simplify_fraction(int *numerator, int *denominator)
{
    int divisor = gcd(*numerator, *denominator);

    if (divisor != 0) {
        *numerator = *numerator / divisor;
        *denominator = *denominator / divisor;
    }

    // Keep the sign on the numerator
    if (*denominator < 0) {
        *numerator = -*numerator;
        *denominator = -*denominator;
    }
}

int main(void)
{
    int numerator, denominator;

    printf("Enter numerator: ");
    scanf("%d", &numerator);
    printf("Enter denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0) {
        printf("Error: Denominator cannot be zero.\n");
        return 1;
    }

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}
