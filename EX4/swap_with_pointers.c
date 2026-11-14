#include<stdio.h>
void swap(int *a, int *b);
int main (void)
{
	int a=5,b=10;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
void swap(int *a, int *b)
{
	int x; //x is used a storage
	x=*a;
	*a=*b;
	*b=x;
}
