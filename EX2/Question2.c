#include<stdio.h>
void calculate_circle(float radius, float *circumference, float *area);

int main (void)
{
        float radius;
        float circumference;
        float area;
        printf("Enter radius of the circle: ");
        scanf("%f",&radius);

        calculate_circle(radius,&circumference,&area);

        printf("The circumference of the circle is : %.2f\n",circumference);
        printf("The area of the circle is : %.2f\n",area );



        return 0;
}

void calculate_circle(float radius, float *circumference, float *area)
{
        float A,C;
        A = *area;
        C = *circumference;

        *circumference = 2*22/(7.0)*radius;
        *area = 22/(7.0)*radius*radius;


}

