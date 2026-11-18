#include <stdio.h>
void calculate_circle(float radius, float *circumference, float *area);
int main(void)
{

	float r,cal_cir,cal_area;
	printf("Enter the radius value:");
	scanf("%f",&r);
	calculate_circle(r,&cal_cir,&cal_area);
	printf("Circumference: %.2f\nArea: %.2f\n",cal_cir,cal_area );
	return 0;
        

}
void calculate_circle(float radius, float *circumference, float *area)
{
	*circumference = 2*(22.0/7.0)*radius;
	*area = (22.0/7.0)*(radius*radius);

}
