#include <stdio.h>
#define PI 3.14159

// Function that uses Output Parameters to Return Circumference and Area
void calculate_circle(float radius, float *circumference, float *area) {
    *circumference = 2 * PI * radius;
    *area = PI * radius * radius;
}

int main() {
    float radius, circumference, area;

    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);

    // Pass the Radius Value and the Addresses of the Result Variables
    calculate_circle(radius, &circumference, &area);

    // Print the Results
    printf("Radius: %.2f\n", radius);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
