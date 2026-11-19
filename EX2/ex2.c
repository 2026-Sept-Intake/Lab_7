#include <stdio.h>
#define pi 3.14159265f
void calculate_circle(float radius,float*circumference,float*area)
{
	*circumference=2*pi*radius;
	*area=pi*radius*radius;
}
int main()
{
	float r,c,a;
	printf("enter the radius: ");
	scanf("%f",&r);
	calculate_circle(r,&c,&a);

	printf("circumference: %.2f\n",c);
	printf("area; %.2f\n",a);

	return 0;
}
