#include<stdio.h>


void calculate_circle(float radius, float *circumference, float *area);
int main(void)
{
	//this program inputs the radius and calculate the circumference and area
        float  rad,cir,A;

         

	printf("please enter the radius");
        scanf("%f",&rad);
        calculate_circle(rad,&cir,&A);
	printf("the circumference is :%.2f\n",cir);
	printf("the area is : %.2f\n",A);
	return 0;


}

void calculate_circle(float radius, float *circumference, float *area) 
{
	*circumference= 2*3.14*radius;
	*area=3.14*radius*radius;
}
        
        
