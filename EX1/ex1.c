#include<stdio.h>
void calculate(int *x, int *y, int *z);
int main(void)
{
	int x,y,z;

	printf("Enter Value for x:");
	scanf("%d", &x);

	 printf("Enter Value for y:");
        scanf("%d", &y);


	 printf("Enter Value for z:");
        scanf("%d", &z);


	calculate(&x, &y, &z);

	printf("Modified x (sum):%d\n", x);
	printf("Modified y (difference):%d\n", y);
	printf("Modified z (product):%d\n", z);

	return 0;
}

void calculate(int *x, int *y, int *z)
{
	int orig_x = *x;
	int orig_y = *y;
	int orig_z = *z;
	
	*x =orig_y + orig_z;
	*y =orig_x - orig_y;
        *z =orig_x * orig_z;

}
