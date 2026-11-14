#include <stdio.h>
void calculate(int *x, int *y, int *z);

int main()
{
	int x,y,z;

	printf("Enter three numbers: ");
	scanf("%d %d %d",&x, &y, &z);

	calculate(&x, &y, &z);

	printf("Modified x (sum): %d\n", x);
	printf("Modified y (difference): %d\n", y);
	printf("Modified z (product): %d\n", z);

	return 0;
}
void calculate(int *x, int *y, int *z)
{
	int a = *x;
	int b = *y;
	int c = *z;

	*x = a + b + c;
	*y = a - b;
	*z = a * c;
}
