#include <stdio.h>

void calculate_circle(float radius, float *circumference, float *area)
{
    *circumference = 2 * 3.142 * radius;
    *area = 3.142 * radius * radius;
}

int main()
{
    float radius, circumference, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    calculate_circle(radius, &circumference, &area);

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

