#include <stdio.h>
void calculate_circle(float radius, float *circumference, float *area)
{
	const float PI = 3.14;

	*circumference = 2 * PI * radius;
	*area = PI * radius * radius;

}
  int main()
{
	float radius = 5;
	float circumference, area;
        calculate_circle(radius, &circumference, &area);

        printf("Radius: %.0f\n", radius);
        printf("Circumference: %.2f\n", circumference);
        printf("Area: %.2f\n", area);

	return 0;
}

