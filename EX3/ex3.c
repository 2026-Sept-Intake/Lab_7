#include <stdio.h>
int main()
{
	float x=5.5;
	float *p=&x;
	printf("address before increment: %p\n",(void*)p);
	p++;
	printf("address after increment:  %p\n",(void*)p);
		return 0;
}
