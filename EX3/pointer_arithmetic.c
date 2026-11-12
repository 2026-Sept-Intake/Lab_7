#include<stdio.h>
int main (void)
{	float x = 5.5,*p = &x;

	printf("address before the increment: %p\n", p);
	p++;//moves forward
        printf("address after the increment: %p\n", p);
        return 0;
}
