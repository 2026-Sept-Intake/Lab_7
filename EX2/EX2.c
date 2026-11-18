#include <stdio.h>
#define PI 3.14159

void calculate_circle(float radius, float *circumference, float *area); // function prototype

int main(){

    float r;
    float circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    calculate_circle(r, &circumference, &area);

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;

    }
void calculate_circle(float radius, float *circumference, float *area)
{
	*circumference= 2 * PI * radius;
	*area= PI * radius * radius;
}


