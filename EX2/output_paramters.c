#include<stdio.h>
#include<math.h>
void calculate_circle(float radius, float *circumference, float *area);
int main (void)
{
	float r,c,a; //r is radius,c is circumference,a is area
        printf("Enter the radius\n");
	scanf("%f",&r);
	calculate_circle(r,&c,&a);
	printf("Circumference:%.2f\nArea:%.2f\n",c,a);
	return 0;
}
void calculate_circle(float radius, float *circumference, float *area)
{
	*circumference=2*(22/7.0)*radius;
	*area=(22/7.0)*pow(radius,2);
}
