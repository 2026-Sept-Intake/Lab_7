#include <stdio.h>

	void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5, b = 10;

    
    printf("Before swap:\n");
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
