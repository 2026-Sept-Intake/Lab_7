#include<stdio.h>
void calculate (int *x, int *y, int *z);
int main(void)
{
	int num1,num2,num3;

	printf("Enter The First value :");
	scanf("%d",&num1);

	printf("Enter The Second value :");
	scanf("%d",&num2);

	printf("Enter The Third value :");
	scanf("%d",&num3);

	calculate(&num1,&num2,&num3);
	printf("The Sum is :%d\n",num1);
	printf("The Difference is :%d\n",num2);
	printf("The Product is :%d\n",num3);

	return 0;
}
void calculate (int *x, int *y, int *z)
{
	int value1=*x;
	int value2=*y;
	int value3=*z;

	*x=value1+value2+value3;
	*y=value1-value2;
	*z=value1*value3;
}
