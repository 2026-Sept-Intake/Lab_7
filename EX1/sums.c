#include<stdio.h>
void calculate(int *x,int *y,int *z);
int main(void)
{
	int value1,value2,value3;
	printf("please enter the first value : ");
	scanf("%d",&value1);
	printf("please enter the second value : ");
	scanf("%d",&value2);
	printf("please enter the third value : ");
	scanf("%d",&value3);

       calculate(&value1,&value2,&value3);
       printf("the sum is :%d\n",value1);
       printf("the difference is :%d\n",value2);
       printf("the product  is :%d\n",value3);
       return 0;
}
void calculate(int *x,int *y,int *z)
{
	int x_value=*x;
	int y_value=*y;
	int z_value=*z;

	*x= x_value+ y_value+ z_value;
	*y= x_value- y_value;
	*z= x_value* z_value;
 
}	
