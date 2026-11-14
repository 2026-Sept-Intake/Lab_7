#include<stdio.h>
void calculate(int *x,int *y,int *z);
int main (void)
{
	int x,y,z;
	printf("Enter the three integers\n");
	scanf("%d %d %d",&x,&y,&z);
	calculate(&x,&y,&z);
        printf("Modified x(sum):%d\nModified y(difference):%d\nModified z(product):%d\n",x,y,z);
	return 0;
}
void calculate(int *x,int *y,int *z)
{
	int orig_x=*x,orig_y=*y,orig_z=*z;
	*x=orig_x+orig_y+orig_z;
	*y=orig_x-orig_y;
	*z=orig_x*orig_z;
}
