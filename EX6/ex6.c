#include <stdio.h>

// Helper Function to Find the Greatest Common Divisor (GCD) using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a < 0 ? -a : a; // Ensure Positive GCD
}

// Function to Simplify a Fraction using Output Parameters
void simplify_fraction(int *numerator, int *denominator) {
    int common = gcd(*numerator, *denominator);
    *numerator /= common;
    *denominator /= common;
}

int main() {
    int numerator, denominator;

    printf("Enter the Numerator: ");
    scanf("%d", &numerator);
    printf("Enter the Denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0) {
        printf("Error: Denominator Cannot be Zero.\n");
        return 1;
    }

    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}
