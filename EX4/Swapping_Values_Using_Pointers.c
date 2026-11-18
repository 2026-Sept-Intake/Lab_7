#include<stdio.h>
void swap(int *a, int *b);
int main (void)
{
	int A = 5;
	int B = 10;

	printf("Before Swap: A= %d, B= %d\n",A,B);

	swap(&A,&B);

	printf("After Swap: A= %d, B= %d\n",A,B);

	return 0;

}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

