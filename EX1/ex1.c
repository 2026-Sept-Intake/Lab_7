#include <stdio.h>
void calculate(int*x,int*y,int*z)
{int ox=*x,oy=*y,oz=*z;
	*x=ox+oy+oz;
	*y=ox-oy;
	*z=ox*oz;
}
int main()
{
	int x,y,z;
	printf("enter x y z: ");
	scanf("%d" "%d" "%d",&x,&y,&z);

	calculate (&x,&y,&z);
	printf("x(sum): %d\n",x);
	printf("y(differnce): %d\n",y);
	printf("z(product): %d\n",z);

	return 0;
}

