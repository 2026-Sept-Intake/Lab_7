#include <stdio.h>
void swap(int *a, int*b);

int main(void)
{	
	// variable declaration
	int x = 5;
	int y = 6;

	printf("Before swap: %d, %d\n",x,y);

	// calling the function
	swap(&x,&y);

	printf("After swap: %d, %d\n",x,y);


	return 0;


}

// swap function 
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
