#include <stdio.h>

void calculate (int *x, int *y, int *z);

int main ()
{
	int a;
	int b;
	int c;

	printf("Enter frist number : ");
	scanf("%d", &a);

	printf("Enter second number : ");
	scanf("%d", &b);

	printf("Enter third number : ");
	scanf("%d", &c);

	calculate (&a, &b, &c);

	printf("Modified x (sum) :%d\n", a);
	printf("Modified y (difference) :%d\n", b);
	printf("Modified z (product) : %d\n", c);

	return 0;

}

void calculate (int *x, int *y, int *z)
{
      int *ptr1 = x;
      int *ptr2 = y;
      int *ptr3 = z;

      int sum = *ptr1 + *ptr2 + *ptr3;
      int diff = *ptr1 - *ptr2;
      int prod= *ptr1 * *ptr3;

      *x = sum;
      *y = diff;
      *z = prod;
}      
