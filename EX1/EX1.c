#include <stdio.h>

// Function prototype
void calculate(int *x, int *y, int *z);

int main() {
    int x, y, z;

    // Declaring three integer variables and getting inputs
    printf("Enter value for x: ");
    scanf("%d", &x);
    printf("Enter value for y: ");
    scanf("%d", &y);
    printf("Enter value for z: ");
    scanf("%d", &z);

    // Call function by passing the memory addresses
    calculate(&x, &y, &z);

    //Print the modified values after calling the function
    printf("\nOutput:\n");
    printf("Modified x (sum): %d\n", x);
    printf("Modified y (difference): %d\n", y);
    printf("Modified z (product): %d\n", z);

    return 0;
}

// Function to modify the three integers via pointers
void calculate(int *x, int *y, int *z) {
    
    int original_x = *x;
    int original_y = *y;
    int original_z = *z;

    // *x = sum of the three variables
    *x = original_x + original_y + original_z;

    // *y = difference between the first two variables
    *y = original_x - original_y;

    // *z = product of the first and third variables
    *z = original_x * original_z;
}
