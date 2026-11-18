#include<stdio.h>
void swap(int *a,int *b)
{
	int x = *a;
	int y = *b;
	*a = y;
	*b = x;
}
int main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter a value:");
	scanf("%d",&b);
	printf("Before swap: a = %d,b = %d\n",a,b);
	int *ptr1=&a;
	int *ptr2=&b;
	swap(ptr1,ptr2);
	printf("After  swap: a = %d,b = %d\n",a,b);
	return 0;
}

