#include <stdio.h>

int main() {
    float x;

    // Prompt the User to Input the Value
    printf("Enter the Value of x: ");
    scanf("%f", &x);

    // Declare a Pointer to x
    float *p = &x;

    // Print the Address of Pointer
    printf("Address before Increment: %p\n", (void*)p);

    // Increment the Pointer
    p++;

    // Print the New Address after Increment
    printf("Address after Increment: %p\n", (void*)p);

    return 0;
}



