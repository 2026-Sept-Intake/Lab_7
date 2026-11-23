#include <stdio.h>

void calculate(int *x, int *y, int *z);

int main(void)
{
	int num1, num2, num3;
	printf("Enter num1, num2 and num3: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	calculate(&num1, &num2, &num3);
	printf("Sum: %d\n", num1);
	printf("Difference between 1st and 2nd variables: %d\n", num2);
	printf("Product of 1st and 3rd variable: %d\n", num3);
	return 0;
}

void calculate(int *x, int *y, int *z)
{
	int xval = *x + *y + *z;
	int yval = *x - *y;
	int zval = *x * *z;
	*x = xval;
	*y = yval;
	*z = zval;
}

