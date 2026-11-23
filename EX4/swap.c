#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{
	int a, b;
	printf("Enter two values: ");
	scanf("%d %d", &a, &b);

	swap(&a, &b);
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

	printf("Swapped values:\n %d  %d\n", *a, *b);
}
