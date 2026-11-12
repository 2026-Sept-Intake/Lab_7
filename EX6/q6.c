#include <stdio.h>
#include <stdlib.h>

void simplify_fraction(int *numerator,int *denominator);
int find_gcd(int a, int b);



int main(void){
	int numerator,denominator;

	int *n = &numerator;
	int *d = &denominator;

	printf("Enter the numerator: ");
	scanf("%d",&numerator);

	printf("Enter the denominator: ");
        scanf("%d",&denominator);

	simplify_fraction(n,d);

	printf("simplified fraction is : %d/%d \n",numerator,denominator);
		

	return 0;
}



void simplify_fraction(int *numerator,int *denominator){
	int gcd = find_gcd(*numerator, *denominator);

	*numerator = *numerator /gcd;
	*denominator = *denominator / gcd;

}


int find_gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
