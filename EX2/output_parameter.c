#include<stdio.h>
void calculate_circle(float radius, float *circumference, float *area)
{
       *circumference = 2 * (22.0/7.0) * radius;
		*area = (22.0/7.0) * radius * radius;
}
	int main (void)
{ 
	float circumference, radius, area;
	printf("enter the radius");
	scanf("%f", &radius);
	calculate_circle(radius, &circumference, &area);//pass the adresses
        printf("radius: %.0f\n", radius);
	printf("circumference: %.2f\n", circumference);
        printf("area: %.2f\n", area);
        return 0;
}
