#include <stdio.h>
#include <stdlib.h>

void simplify_fraction(int *numerator, int *denominator);

int main(void)
{
	int numerator, denominator;
	printf("Enter numerator and denominator: ");
	scanf("%d %d", &numerator, &denominator);

	if( denominator == 0 )
		printf("Undefined value");
	else if( numerator == 0 )
		printf("Simplified: 0");
	else
	{
		simplify_fraction(&numerator, &denominator);
		if ( numerator == 1 && denominator == 1 )
			printf("Simplified: 1");
		else if ( denominator == 1 || denominator == -1 )
			printf("Simplified: %d", numerator*denominator);
		else
			printf("Simplified:  %d / %d", numerator, denominator);
	}
	printf("\n");
	return 0;
}

void simplify_fraction(int *numerator, int *denominator)
{	
	int num1 = abs(*numerator);
	int num2 = abs(*denominator);
	
	// using Euclidean algorithm
	while( num2 != 0 )
	{
		int temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}

	*numerator /= num1;
	*denominator /= num1;
}
