#include <stdio.h>

void calculate_circle(float radius, float *circumference, float *area)
{
    float pi = 3.14159;

    *circumference = 2 * pi * radius;
    *area = pi * radius * radius;
}

int main()
{
    float radius, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    calculate_circle(radius, &circumference, &area);

    printf("\nCircumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

