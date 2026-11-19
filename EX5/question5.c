#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b);
int compare_absolute(int a, int b);
int max_val(int a, int b, int (*compare)(int, int));
int main()
{
    int a,b;

    printf("Input a and b.");
    scanf("%d %d", &a, &b);

    // Pass the compare function pointer
    int simple_max = max_val(a, b, compare);

    // Pass the compare_absolute function pointer
    int abs_max = max_val(a, b, compare_absolute);

    printf("Simple Comparison: max = %d\n", simple_max);
    printf("Absolute Comparison: max = %d\n", abs_max);

    return 0;
}

int compare(int a, int b)
{
    if (a > b)
	    return 1;
    if (b > a)
	    return -1;
    return 0;
}

int compare_absolute(int a, int b)
{
    int abs_a = abs(a);
    int abs_b = abs(b);

    if (abs_a > abs_b)
	    return 1;
    if (abs_b > abs_a)
	    return -1;
    return 0;
}

int max_val(int a, int b, int (*compare)(int, int))
{
    int result = compare(a, b);

    if (result > 0)
   	 {
        	return a;
   	 }
    else
   	 {
        	return b;
   	 }
}
