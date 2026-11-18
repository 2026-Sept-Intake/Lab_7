#include <stdio.h>
#include <stdlib.h>

void simplify_fraction(int *numerator, int *denominator);

int main(void)
{
    int numerator, denominator;
    printf("Enter numerator: ");
    scanf("%d", &numerator);

    printf("Enter denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0)
    {
        printf("Error denominator cannot be 0.\n");
        return 1;
    }

    simplify_fraction(&numerator, &denominator);
    simplify_fraction(&numerator, &denominator);

    if (numerator == 0)
    {
        printf("Simplified Fraction: 0\n");
    }
    else
    {
        printf("Simplified Fraction: %d/%d\n", numerator, denominator);
    }
    
    
    return 0;
}

void simplify_fraction(int *numerator, int *denominator)
{
    int a = abs(*numerator);
    int b = abs(*denominator);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    if (a > 0)
    {
        *numerator /= a;
        *denominator /= a;
    }
    if (*denominator < 0)
    {
        *numerator = -(*numerator);
        *denominator = -(*denominator);
    }
}	
