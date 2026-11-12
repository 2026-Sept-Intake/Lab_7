#include <stdio.h>

int main(void){

	float x = 55;
	float *ptr = &x;


	printf("%p \n",ptr);
	ptr++;
	printf("%p \n",ptr);

	return 0;
}
