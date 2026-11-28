#include <stdio.h>

void calculate_circle(float radius, float *circumference, float *area);

int main ()

{
	float radius = 5;
	float circumference;
	float area;

	calculate_circle(radius, &circumference, &area);

	printf ("Circumeference of the circle =%.2f\n", circumference);

	printf ("Area of the circle =%.2f\n", area);

	return 0;



}

void calculate_circle(float radius, float *circumference, float *area)
{
	float PI = 3.147;

	*circumference = 2 * PI * radius;

	*area = PI * radius * radius ;

}
