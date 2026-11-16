#include<stdio.h>
int gcd(int a, int b){
	while (b != 0)
	{
		int temp = b;
		b = a% b;
		a = temp;
	}
	return a;
}
void simplify_fraction(int *numerator, int *denominator){
	int divisor = gcd(*numerator, *denominator);
	*numerator = *numerator / divisor;
	*denominator = *denominator / divisor;
}
int main (void){
	int numerator, denominator;
	printf("Enter the numerator: ");
	scanf("%d", &numerator);
	printf("Enter the denominator: ");
        scanf("%d", &denominator);

	simplify_fraction(&numerator, &denominator);
	printf("Simlified fraction: %d/%d\n", numerator, denominator);
	return 0;
}

