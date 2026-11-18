#include<stdio.h>
#include<stdlib.h>
int compare(int a, int b);
int compare_absolute(int a, int b);
int max(int a, int b, int (*compare)(int, int));
int main (void)
{
    int a = 8;
    int b = -10;

    printf("Simple Comparison: Max = %d\n", max(a,b,compare));
    printf("Absolute Comparison: Max = %d\n", max(a,b,compare_absolute));

    return 0;

}

int compare(int a, int b)
{
    if (a > b) 
    {
        return 1;
    } 
    else if (b > a) 
    {
        return -1;
    } 
    else 
    {
        return 0;
    }
}

int compare_absolute(int a, int b) 
{
    int absA = abs(a);
    int absB = abs(b);

    if (absA > absB) 
    {
        return 1;
    } 
    else if (absB > absA) 
    {
        return -1;
    } 
    else 
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

