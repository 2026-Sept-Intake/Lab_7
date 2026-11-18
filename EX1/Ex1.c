#include <stdio.h>
void calculate(int *x, int *y, int *z);
int main(void)
{
	int x,y,z;
	printf("Enter the values for x,y and z respectively:\n");
	scanf("%d %d %d",&x,&y,&z);
        calculate(&x,&y,&z);
	printf("Modified x(sum): %d\n",x);
	printf("Modified y(difference): %d\n",y);
	printf("Modified z(product): %d\n",z);
	return 0;

}
void calculate(int *x, int *y, int *z)
{
     int a,b,c;
     a = *x;
     b = *y;
     c = *z;
	
    *x = (a + b + c);
    *y = (a-b);
    *z = (a*c);
}

