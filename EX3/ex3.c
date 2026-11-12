#include<stdio.h>
int main()
{
	float x =5.5;
	float*p =&x;
	
	printf("Adress before increment: %p\n",(void*)p);

	p++;

	printf("Adress after increment: %p\n",(void*)p);

	return 0;
}
