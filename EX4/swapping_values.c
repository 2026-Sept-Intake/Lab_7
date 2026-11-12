#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
		*a = *b;
		*b = temp;
}
int main(void)
{ 
	int a, b;
	printf("enter values for a");
	scanf("%d", &a);
	printf("enter values for b");
        scanf("%d", &b);

	printf("beforeswap: a = %d, b = %d\n", a, b);
	swap(&a, &b); //pass the addresses
        printf("afterswap: a = %d, b = %d\n", a, b);
	return 0;
}



