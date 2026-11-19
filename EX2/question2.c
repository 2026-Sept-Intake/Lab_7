#include <stdio.h>

void calculate_circle(float radius, float *circumference, float *area);
int main(void)
{
    float radius, circumference, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    calculate_circle(radius, &circumference, &area);

    printf("Radius: %.0f\n", radius);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

void calculate_circle(float radius, float *circumference, float *area)
{
    float pi = 22/7.00;
    *circumference = 2 * pi * radius;
    *area = pi * radius * radius;
}
