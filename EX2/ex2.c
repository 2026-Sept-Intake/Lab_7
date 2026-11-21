
#include <stdio.h>

#define PI 3.1416

void calculate_circle(float radius, float *circumference, float *area);

int main(void) {
    float radius, circumference, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    calculate_circle(radius, &circumference, &area);

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

void calculate_circle(float radius, float *circumference, float *area) {
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
}


