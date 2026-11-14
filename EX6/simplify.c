#include<stdio.h>
void simplify_fraction(int *numerator, int *denominator);
int main (void)
{
	int num,deno; //num is numerator,deno is denominator of the fraction
	printf("Enter the numerator first & then the denominator of the fraction\n");
	scanf("%d %d",&num,&deno);
	simplify_fraction(&num,&deno);
	printf("Simplified Fraction: %d/%d\n",num,deno);
	return 0;
}
void simplify_fraction(int *numerator,int *denominator)
{
	int a=*numerator,b=*denominator; //duplicating the value to disposable variables to calc gcd
	int r; //remainder
       	while (b != 0)
       	{
		r=a%b;
		a=b;
		b=r;
	}
	//now gcd becomes "a" after the loop finishes
	//now simplifying the factor using the gcd
	*numerator=*numerator/a;
	*denominator=*denominator/a;
}
