#include<stdio.h>
void calculate(int *x,int *y,int *z)
{
	int a = *x;
	int b = *y;
	int c = *z;

	*x = a+b+c;
	*y = a-b;
	*z = a*c;
}
int main()
{
	int x,y,z;
   	printf("Enter the first number:");
	scanf("%d", &x);

	printf("Enter the second number:");
        scanf("%d", &y);

	printf("Enter the third number:");
        scanf("%d", &z);


	calculate(&x, &y, &z);

	printf("\nsum = %d", x);
	printf("\ndifference = %d", y);
	printf("\nproduct = %d", z);

	return 0;









}	















	
