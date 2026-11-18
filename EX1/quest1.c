#include <stdio.h>

void calculate(int *x, int *y, int *z)
{
    int a = *x , b = *y , c = *z; 	
    *x = a+b+c;
    *y = a-b;
    *z = a*c;
}

int main()
{
    int a, b, c;
    printf("Enter x: ");
    scanf("%d", &a);
    printf("Enter y: ");
    scanf("%d", &b);
    printf("Enter z: ");
    scanf("%d", &c);
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    calculate(p1, p2, p3);
    printf("Modified X (sum): %d\n", a);
    printf("Modified Y (difference): %d\n", b);
    printf("Modified Z (product): %d\n", c);
    return 0;
}

