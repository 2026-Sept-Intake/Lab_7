#include <stdio.h>
#include <stdlib.h>
int compare (int a, int b);
int compare_absolute (int a, int b);
int max(int a, int b, int (*compare)(int, int));

int main ()
{
	int a ;
	int b ;

	printf("Enter a :");
	scanf("%d", &a);

	printf ("Enter b :");
	scanf ("%d", &b);

	printf("Simple Comparison : max = %d\n", max(a, b, compare));

	printf("Absolute Comparison: max = %d\n", max(a, b, compare_absolute));

	return 0;
}

int compare (int a, int b)
{
	if (a > b)
	{
		return 1;
	}
	
	else if (a <  b)
	{
		return -1;
	}
	else (a == b);
	{
		return 0;
	}

}

int compare_absolute(int a, int b)
{
	int abs_a = abs(a);
	int abs_b = abs (b);

	if (abs_a > abs_b)
	{

		return 1;
	}
	else if ( abs_a < abs_b)
	{
		return -1;
	}
	else ( abs_a == abs_b);
	{
		return 0;
	}

}

int max(int a, int b, int (*compare)(int, int))
{
	if (compare(a, b) >= 0)
	{
		return a;
	}

	else
	{
		return b;
	}

}
		
