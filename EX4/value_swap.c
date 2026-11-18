#include<stdio.h>

void swap(int *a,int *b);
int main(void)
{
	// this program swaps thw values of two pointors
	int a=5;
        int b=10;
	printf("before swap a = %d\n",a);
	printf("before swap b = %d\n",b);
	swap(&a,&b);
	printf("after swap a = %d\n",a);
	printf("after swap b = %d\n",b);
	
        return 0;




}


void swap(int *a,int *b)
{
      int new_value;
      new_value=*a;
      *a=*b;
      *b=new_value;

}

