#include <stdio.h>
#include <stdlib.h>

// Function prototype
void simplify_fraction(int *num, int *denom);

int main() {
    int num, denom;

    // Getting input from user
    printf("Enter Numerator: ");
    scanf("%d", &num);
    printf("Enter Denominator: ");
    scanf("%d", &denom);

    // Validating the denominator to prevent division by zero
    if (denom == 0) {
        printf("Error: Denominator cannot be zero.\n");
    }
    else {
        // Pass addresses to modify original values
        simplify_fraction(&num, &denom);
        
        printf("Simplified Fraction: %d/%d\n", num, denom);
    }

    return 0;
}

// Function to simplify a fraction using the GCD
void simplify_fraction(int *num, int *denom) {
    int a = abs(*num);
    int b = abs(*denom);

    // Euclidean algorithm for GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;

    if (gcd > 0) {
        *num /= gcd;
        *denom /= gcd;
    }
}
