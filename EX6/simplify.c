#include<stdio.h>
void simplify_fraction(int *numerator, int *denominator);
int find_gcd(int a,int b);

int main(void)
{
	int deno,num;
        printf("please enter the denominator : ");
	scanf("%d",&deno);
	printf("Please enter the numinator : ");
	scanf("%d",&num);
        simplify_fraction(&num,&deno);
	printf("simplified fraction is : %d/%d\n",num,deno);
	return 0;


}


int find_gcd(int a,int b)
{
	if (a<0){
		a =-a;
	}
	if (b<0){
		b =-b;
	}
	while (b!=0){
		int new=b;
		b=a%b;
		a=new;
	}
	return a;
}

void simplify_fraction(int *numerator, int *denominator)
{
  if(*denominator == 0)
  {
	  return;
  }

  int gcd = find_gcd(*numerator,*denominator);
  *numerator=*numerator/gcd;
  *denominator=*denominator/gcd;

  if(*denominator <0)
  {
	  *numerator=-(*numerator);
	  *denominator=-(*denominator);
  
 }
}
