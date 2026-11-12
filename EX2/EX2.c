#include<stdio.h>
void calculate_circle(float radius, float *circumference, float *area)
{

	*circumference = 2 * 3.1416 * radius;
	*area = 3.1416 * radius * radius;
}	
int main()
{
	float radius;
	float circumference, area;
	 printf("Enter the radius:");
	 scanf("%f", &radius);

	 calculate_circle(radius, &circumference, &area);
	
	 printf("circumference: %.2f\n", circumference);
	 printf("area: %.2f\n", area);

	 return 0;







}
	
