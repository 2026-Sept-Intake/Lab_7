#include<stdio.h>

void calculate(int *x,int *y,int *z);
int main ()
{
	int int1,int2,int3;
	printf("Enter first integer: ");
	scanf("%d",&int1);
	printf("Enter second integer: ");
	scanf("%d",&int2);
	printf("Enter third integer: ");
	scanf("%d",&int3);
	
	calculate(&int1,&int2,&int3);

	printf("Sum of the three integers is: %d\n",int1);
	printf("Difference between first two integers is: %d\n",int2);
	printf("Product of first and third integer is: %d\n",int3);



	return 0;
}

void calculate(int *x,int *y,int *z)
{
	int a,b,c;
	a= *x;
	b= *y;
	c= *z;

	*x =a+b+c;// sum of three integers
	*y =a-b;// difference between first two integers
	*z =a*c;// product of first and third integers
}	
