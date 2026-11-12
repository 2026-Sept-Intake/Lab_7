#include<stdio.h>
void calculate_circle(float radius, float *circumference, float *area)
{
      float pi=3.142;
      *circumference= 2*pi*radius;
      *area= pi*radius*radius;
}
int main(void)
{
float circumference,area,radius;
printf("enter the radius");
scanf("%f",&radius);

calculate_circle(radius,&circumference,&area);
printf("Circumference:%.2f\n",circumference);
printf("Area: %.2f\n",area);
return 0;
}


