#include <stdio.h>
void calculate(int *x, int *y, int *z);
int main (void)
{
	int x,y,z;
	printf("Enter values for x, y, and z: ");
    	scanf("%d %d %d", &x, &y, &z);
	
	calculate(&x,&y,&z);

	printf("Modified x (sum): %d\n",x);
	printf("Modified y (difference): %d\n", y);
    	printf("Modified z (product): %d\n", z);
	
	return 0;
}

void calculate (int *x, int *y, int *z)
{
	int og_x = *x;
	int og_y = *y;
	int og_z = *z;

	*x = og_x + og_y + og_z;
	*y = og_x - og_y;
	*z = og_x * og_z;
}
