#include <stdio.h>

int gcd(int a, int b){
	while (b != 0){
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

void simplify_fraction(int *numerator, int *denominator){
	int g = gcd(*numerator, *denominator);
	*numerator /= g;
	*denominator /= g;
}

int main(){
	int num, den;
	printf("Enter numerator: ");
	scanf("%d" , &num);
	printf("Enter denominator: ");
	scanf("%d" , &den);
	simplify_fraction(&num, &den);
	printf("Simpliflied Fraction: %d/%d\n" , num, den);

	return 0;
}
