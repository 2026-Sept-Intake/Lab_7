#include <stdio.h>

// Function that Swaps the Values of Two Integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;

    // Prompt the User to Input Values for the Two Variables
    printf("Enter the Value of a: ");
    scanf("%d", &a);
    printf("Enter the Value of b: ");
    scanf("%d", &b);

    // Print the Values Before Swapping
    printf("\nBefore swap: a=%d, b=%d\n", a, b);

    // Call the Swap Function, Passing the Addresses of a and b 
    swap(&a, &b);

    // Print the Values After Swapping
    printf("After swap: a=%d, b=%d\n", a, b);

    return 0;
}

