#include <stdio.h>

int main(void)
{
    float x = 5.5;
    float *p = &x;

    printf("Address before increment: %p\n",p);
    
    p++; // Moves forward by the size of a float (4 bytes)
    
    printf("Address after increment: %p\n",p);

    return 0;
}
