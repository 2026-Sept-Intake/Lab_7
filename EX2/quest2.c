#include<stdio.h>
void calculate_circle(float radius,float *circumference,float *area)
{
	*circumference = 2*(22.0/7.0)*radius;
	*area = (22.0/7.0)*radius*radius;
}
int main()
{
	float RAD,CIR,AREA;
	printf("Radius: ");
	scanf("%f",&RAD);
	float *ptr2=&CIR;
	float *ptr3=&AREA;
	calculate_circle(RAD,ptr2,ptr3);
	printf("Circumference: %.2f\n",CIR);
	printf("Area: %.2f\n",AREA);
	return 0;
}
	
