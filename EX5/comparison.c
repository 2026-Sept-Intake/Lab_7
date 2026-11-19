#include <stdio.h>
#include <stdlib.h>

int main(void)
{
		
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

void max(int a, int b, int(*compare)(int, int))
