#include<stdio.h>
void calculate_circle(float radius, float*circumference, float *area);

int main(void)
{
	float radius,circumference,area;

	printf("radiu:");
	scanf("%f", &radius);

	calculate_circle(radius, &circumference, &area);

	printf("Circumference:%.2f\n", circumference);
	printf("Area:%.2f\n",area);

	return 0;
        
}

void calculate_circle(float radius, float*circumference, float *area)
{
	float pi = 3.14159;
	*circumference = 2*pi*radius;
	*area =pi*radius*radius;
}
