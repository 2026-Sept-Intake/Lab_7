#include <stdio.h>

void calculate(int *x,int *y, int *z);

int main(void){
	int v1,v2,v3;
	int *ptr1 = &v1;
	int *ptr2 = &v2;
	int *ptr3 = &v3;

	printf("Enter the value for v1: ");
	scanf("%d",&v1);

	printf("Enter the value for v2: ");
	scanf("%d",&v2);

	printf("Enter the value for v3:");
        scanf("%d",&v3);
	calculate(ptr1, ptr2, ptr3);

	printf("v1 = %d \n",v1);
	printf("v2 = %d \n",v2);
	printf("v3 = %d \n",v3);

	return 0;
}

void calculate(int *x,int *y, int *z){

	int x_or = *x;
	int y_or = *y;
	int z_or = *z;
	*x = x_or + y_or + z_or;
	*y = x_or - y_or;
	*z = x_or * z_or;

}
