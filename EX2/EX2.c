#include<stdio.h>
void calculated_circle(float radius,float *circumference,float *area){
	*circumference = 2 * 3.14 * radius;
	*area = 3.14 * radius * radius;
}

int main(){
	float radius;
	float circumference;
	float area;
	 
	printf("Enter the Radius:");
	scanf("%f",&radius);

	calculated_circle(radius,&circumference,&area);

	printf("circumference: %.2f\n",circumference);
	printf("area: %.2f\n",area);

	return 0;
}	
