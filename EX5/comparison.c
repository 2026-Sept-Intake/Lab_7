#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int(*compare_max)(int, int));
int compare_absolute(int a, int b);
int compare(int a, int b);

int main(void)
{
	int a, b;
	printf("Enter values for a and b: ");
	scanf("%d %d", &a, &b);
	
	printf("Simple comparison: max = %d", max( a, b, compare));
	printf("\nAbsolute Comparison: max = %d\n", max( a, b, compare_absolute));
	return 0;
}

int compare(int a, int b)
{
	if( a > b )
		return 1;
	else if( b > a )
		return -1;
	else
		return 0;
}

int compare_absolute(int a, int b)
{
	if( abs(a) > abs(b) )
		return 1;
	else if( abs(b) > abs(a) )
		return -1;
	else 
		return 0;
}

int max(int a, int b, int(*compare_max)(int, int))
{
	int result = compare_max( a, b );
	if( result == 1 )
		return a;
	if( result == -1 )
		return b;
	else
		return 0;
}
