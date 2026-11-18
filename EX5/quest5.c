#include<stdio.h>
#include<stdlib.h>
int compare(int a,int b)
{
	if (a>b)
	{
		return 1;
	}
	else if (b>a)
	{
		return -1;
	}
	else if (a=b)
	{
		return 0;
	}
}
int compare_absolute(int a,int b)
{
	a = abs(a);
	b = abs(b);

	if (a > b)
	{
	       	return 1;
	}
        else if (b > a)
	{
                return -1;
	}
        else if (a=b) 
	{
                return 0;
	}
}
int max(int a, int b ,int(*compare)(int,int))
{
	if (compare(a,b) >=0)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int a,b,x,y;
	printf("enter the value : ");
	scanf("%d",&a);
	printf("enter the value : ");
	scanf("%d",&b);
	int (*ptr1)(int,int) = compare;
	int (*ptr2)(int,int) = compare_absolute;
	x = max(a,b,ptr1);
	y = max(a,b,ptr2);
	printf("Simple Comparison: max = %d\n",x);
	printf("Absolute Comparison: max = %d\n",y);
	return 0;

}
