#include <stdio.h>

int main (void)
{
	int numerator,denominator;

	printf("Enter the numerator: ");
	scanf("%d",numerator);
	printf("Enter the denominator: ");
        scanf("%d",denominator);

	return 0;
}

void simplify_fraction(int *numerator, int *denominator)
{

