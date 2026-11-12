#include<stdio.h>
// modified three integers through pointers
void calculate(int *x, int *y, int *z)
{	
	int a = *x;
	int b = *y;
	int c = *z;
        *x = a + b + c;
	*y = a - b;
	*z = a * c;
}
int main(void)
{ 
	int x, y, z;
	printf("Enter the value x");
	scanf("%d", &x);
	printf("Enter the value y");
        scanf("%d", &y);
        printf("Enter the value z");
        scanf("%d", &z);
	
	calculate(&x, &y, &z); // pass the address
	printf("modified x (sum):%d\n", x);
	printf("modified y (difference):%d\n", y);
        printf("modified z (product):%d\n", z);
	return 0;
}



