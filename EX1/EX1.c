#include <stdio.h>

void calculate(int *x, int *y, int *z)
{
    int a = *x;
    int b = *y;
    int c = *z;

    *x = a + b + c;
    *y = a - b;
    *z = a * c;
}

int main()
{
    int x, y, z;

    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    printf("Enter value for z: ");
    scanf("%d", &z);

    calculate(&x, &y, &z);

    printf("\nModified x (sum): %d\n", x);
    printf("Modified y (difference): %d\n", y);
    printf("Modified z (product): %d\n", z);

    return 0;
}
