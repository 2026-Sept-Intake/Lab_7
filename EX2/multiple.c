#include <stdio.h>

void calculate_circle(float radius, float *circumference, float *area);
int main(void)
{
	float circ, area, rad;
	printf("Enter radius: ");
	scanf("%f", &rad);
	
	calculate_circle(rad, &circ, &area);
	printf("Radius: %.2f\n", rad);
	printf("Circumference: %.2f\n", circ);
	printf("Area: %.2f\n", area);
	return 0;
}

void calculate_circle(float radius, float *circumference, float *area)
{
	*circumference = 2 * (22/7.0) * radius;
	*area = (22/7.0) * radius * radius;
}

