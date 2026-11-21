
#include <stdio.h>

void simplify_fraction(int *numerator, int *denominator)
{
    int a = *numerator;
    int b = *denominator;
    int temp;

    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    if (a != 0)
    {
        *numerator = *numerator / a;
        *denominator = *denominator / a;
    }

    if (*denominator < 0)
    {
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

    if (denominator == 0)
    {
        printf("Error: Denominator cannot be zero.\n");
        return 1;
    }

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n",
           numerator, denominator);

    return 0;
}

