#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Pass the addresses of 'a' and 'b' to the swap function
    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b)
{
	int temp = *a;  //store a value as temporary
	*a = *b;
	*b = temp;     //giving b the a value that we stored previously
}
