#include <stdio.h>

int main()
{
    float x = 5.5;
    float *p = &x;

    // Print address before increment
    printf("Address before increment: %p\n", (void *)p);

    // Increment the pointer
    p++;

    // Print address after increment
    printf("Address after increment: %p\n", (void *)p);

    return 0;
}
