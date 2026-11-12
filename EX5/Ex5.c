#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b)
{

    if (a > b)
        return 1;
    else if(b>a)
        return -1;
    else
        return 0;
}

int compare_absolute(int a, int b)
{

a = abs(a);
b = abs (b);

    if (a > b)
        return 1;
    else if(b>a)
        return -1;
    else
        return 0;
}

int max(int a, int b, int(*compare_func)(int,int))
{

    if (compare_func(a,b) >= 0)
        return a;
    else
        return b;
}

int main(){

    int a =8 , b = -10;

    printf("Input: a = %d, b = %d\n", a,b);
    printf("Simple comparison: max = %d\n", max(a,b,compare));
    printf("Absolute comparison: max = %d\n", max(a,b,compare_absolute));

return 0; 
}
