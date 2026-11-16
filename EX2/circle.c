#include<stdio.h>
#define PI 3.14

void calculate_circle(float radius, float *circumeference, float *area){
	*circumeference = 2 * PI * radius;
	*area = PI * radius * radius; 
}

int main(void){
	float radius, circumeference, area;

	printf("Enter the radius: ");
	scanf("%f", &radius);

	calculate_circle(radius, &circumeference, &area);

	printf("circumeference: %.2f\n" , circumeference);
	printf("Area: %.2f\n" , area);

	return 0;
}
