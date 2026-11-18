#include <stdio.h>
#include <math.h>

//compare two integer
int compare(int a, int b)
{
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}
// Compares the absolute values of two integers.  
int compare_absolute(int a, int b)
{
    int absA = (int) fabs((double)a);
    int absB = (int) fabs((double)b);

    if (absA > absB)
        return 1;
    else if (absB > absA)
        return -1;
    else
        return 0;
}
int max(int a, int b, int (*compare)(int, int))
{
    if (compare(a, b) >= 0)
        return a;
    else
        return b;
}
int main(void)
{
    int a, b;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);

    printf("Simple Comparison: max = %d\n", max(a, b, compare));
    printf("Absolute Comparison: max = %d\n", max(a, b, compare_absolute));

    return 0;
}
