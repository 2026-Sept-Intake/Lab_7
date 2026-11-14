#include<stdio.h>
#include<stdlib.h> // Required for the abs() function
int compare(int a, int b);
int compare_absolute(int a, int b);
int max(int a, int b, int (*cmp)(int, int));
int main (void)
{
	int a,b;
	printf("input the 2 numbers\n");
	scanf("%d %d",&a,&b);
        int simple_max=max(a,b,compare); 
	int absolute_max=max(a,b,compare_absolute);
	printf("Simple Comparison: max = %d\nAbsolute Comparison: max = %d\n",simple_max,absolute_max);
	return 0;
}
int compare(int a,int b)
{
	if(a>b)
		return 1;
	else if(b>a)
		return -1;
	else
		return 0;
}
int compare_absolute(int a,int b)
{
	if(abs(a)>abs(b))
		return 1;
	else if(abs(b)>abs(a))
		return -1;
	else
		return 0;
}
int max(int a, int b, int (*cmp)(int, int)) // Uses the 'cmp' function pointer to decide which comparison logic to apply
{
    // Call the passed comparison function
    if (cmp(a, b) > 0)
        return a;
    else if (cmp(a, b) <= 0) 
        return b;
}
