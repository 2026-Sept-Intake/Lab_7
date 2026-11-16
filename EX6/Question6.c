#include <stdio.h>

void simplify_fraction(int *numerator, int *denominator);

int main (void)
{
	int num, den;

	printf("Enter the numerator of the fraction: ");
	scanf("%d",&num);

	printf("Enter the denominator of the fraction: ");
	scanf("%d",&den);

	simplify_fraction(&num , &den);

	printf("Simplified Fraction: %d/%d\n", num, den);

	return 0;
}

void simplify_fraction(int *numerator, int *denominator)
{
	int a = *numerator;
	int b = *denominator;
	int temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	*numerator = *numerator / a;
	*denominator = *denominator / a;

}
