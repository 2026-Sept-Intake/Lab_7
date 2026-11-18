#include<stdio.h>



int main(void)
{
	//this program increments two pointors and thier address
	float x=5.5;
	float *p=&x;
	printf("the memory address of the poointor is : %p\n",p);
	p++;
        printf("the new memory address of the pointor is : %p\n",p);
        return 0;
}	
