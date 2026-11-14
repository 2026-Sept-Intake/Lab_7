#include<stdio.h>

int main (void)
{
	float x=5.5,*p=&x;
	printf("%p\n",p);
	p++;
	printf("%p\n",p);
	return 0;
}
