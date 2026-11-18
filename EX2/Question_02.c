#include<stdio.h>
void calculate_circle(float radius, float *circumference, float *area);
int main(void)
{
	float radius,area,circumference;
	printf("Enter The Radius of Cricle :");
	scanf("%f",&radius);

	calculate_circle(radius,&area,&circumference);
	printf("The Circle Circumference is :%.2f\n",circumference);
	printf("The Circle Area is :%.2f\n",area);

	return 0;
}
void calculate_circle(float radius, float *circumference, float *area)
{
	float A,C;
	A=*area;
	C=*circumference;
	
	*area=22/(7.0)*radius*radius;
	*circumference=2*22/(7.0)*radius;
}

