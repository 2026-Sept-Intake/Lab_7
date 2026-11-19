#include <stdio.h>
int gcd(int a,int b)
{
	while(b!=0)
	{
		int t=b;
		b=a%b;
		a=t;
	}
	return a;
}
void simplify_fraction(int*numerator,int*denominator)
{
	int g=gcd(*numerator,*denominator);
	if(g<0) g=-g;
	*numerator/=g;
	*denominator/=g;
}
int main()
{
	int n,d;
	printf("enter numerator and denominator: ");
	scanf("%d %d",&n,&d);

	if(d==0)
	{
		printf("denominator cannot be zero!\n");
		return 1;
	}

	simplify_fraction(&n,&d);
	printf("simplified fraction :%d/%d\n",n,d);
	return 0;
}

