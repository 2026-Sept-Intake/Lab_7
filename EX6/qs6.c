#include <stdio.h>

void simplify_fraction(int *numerator, int *denominator);

int main ()
{
	int numerator;
	int denominator;

	printf ("Enter Numenator :");
	scanf ("%d", &numerator);

	printf ("Enter Denominator :");
	scanf ("%d", &denominator);

	if (denominator == 0)
	{
		printf ("Denominator cannot be zero.\n");

		return 1;
	}

	simplify_fraction(&numerator, &denominator);

	printf("Simplified fraction : %d/%d\n", numerator, denominator);

	return 0;
}


void simplify_fraction(int *numerator, int *denominator)
{
	int ptr1 = *numerator;
	int ptr2 = *denominator;

	while (ptr2 != 0)
	{
		int remainder = ptr1 % ptr2;
		ptr1 = ptr2;
		ptr2 = remainder;
	}

	*numerator = *numerator / ptr1;
	*denominator = *denominator / ptr1;
}



