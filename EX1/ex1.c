#include <stdio.h>

// Function that Modifies Original Variables using Pointers
void calculate(int *x, int *y, int *z) {
    // Store Original Values to Prevent Overwriting
    int temp_x = *x;
    int temp_y = *y;
    int temp_z = *z;

    *x = temp_x + temp_y + temp_z;  // Sum of the Three Variables
    *y = temp_x - temp_y;          // Difference Between the First Two Variables
    *z = temp_x * temp_z;         // Product of the First and Third Variables
}

int main() {
    int x, y, z;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);

    // Pass the Addresses of the Variables
    calculate(&x, &y, &z);

    printf("Modified x (Sum): %d\n", x);
    printf("Modified y (Difference): %d\n", y);
    printf("Modified z (Product): %d\n", z);

    return 0;
}

