#include <stdio.h>
#define PI 3.14159

void calculate_circle(float radius,float *circumference, float *area);

int main(void){
        float circumference;
        float area;
        float *ptrC = &circumference ;
        float *ptrA = &area ;
        float radius;

        printf("Enter the radius: ")
        ;
        scanf("%f",&radius);

        calculate_circle(radius,ptrC,ptrA);
        printf("%.2f \n",circumference);
        printf("%.2f \n",area);
        return 0;
}

void calculate_circle(float radius,float *circumference, float *area){

        *circumference = 2*PI*radius;
        *area = PI*radius*radius;


}

