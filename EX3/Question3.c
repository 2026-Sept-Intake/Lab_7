#include <stdio.h>
int main (void)
{
	float y = 6.5;
	float *p = &y;
	printf("Address before increment: %p\n",p);
	p++;
	printf("Address after increment: %p\n",p);

	return 0;
}
