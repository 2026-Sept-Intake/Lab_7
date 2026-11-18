#include<stdio.h>
void simplify_fraction(int *numerator, int *denominator);

int main (void)
{
	int nume, deno;

	printf("ENTER THE NUMERATOR OF THE FRACTION: ");
	scanf("%d",&nume);

	printf("ENTER THE DENOMINATOR OF THE FRACTION: ");
	scanf("%d",&deno);

	simplify_fraction(&nume, &deno);

	printf("SIMPLIFIED FRACTION: %d/%d\n", nume, deno);

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

