#include <stdio.h>
#include <stdlib.h>

void simplify_fraction(int *numerator, int *denominator)
{
	int a = abs(*numerator);
	int b = abs(*denominator);
	int temp;

	while (b != 0) {
	    temp = b;
	    b = a % b;
	    a = temp;
	}
	*numerator = *numerator / a;
	*denominator = *denominator / a;
}
int main () {
    int numerator, denominator;
   
    printf("Enter numerator: ");
    scanf("%d", &numerator);

    printf("Enter denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0) {
	printf("Invalid denominator\n");
	return 0;
    }
    simplify_fraction(&numerator, &denominator);

    printf("Simplified Fraction: %d/%d\n", numerator, denominator);

    return 0;
}
