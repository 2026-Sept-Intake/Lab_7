#include <stdio.h>
#include <stdlib.h>
int compare(int a,int b);
int compare_absolute(int a,int b);
int max(int a,int b,int (*compare)(int,int));
int main(void)
{
	int a,b;
	printf("Enter the values for a and b\n");
	scanf("%d %d",&a,&b);
	int simple_max = max(a,b,compare);
	printf("Simple Comparison: max = %d\n",simple_max);
	int abs_max = max(a,b,compare_absolute);
	printf("Absolute Comparison: max = %d\n",abs_max);
	return 0;
}

int compare(int a,int b)// Comparison Function
{
	if(a>b)
	{
		return 1;
	}
	else if(b>a)
	{
		return -1;
	}	
        else
	{
		return 0;
	}		
}

int compare_absolute(int a,int b)// Absolute Comparison Function
{
	int abs_a = abs(a);
	int abs_b = abs(b);
	if(abs_a>abs_b)
	{
		return 1;
	}	
        else if(abs_b>abs_a)
	{
		return -1;
	}
        else
	{
		return 0;
	}	
 	
}	

int max(int a,int b,int(*compare)(int,int))// max function using a function pointer
{
	if(compare(a,b) == 1)
	{
		return a;
	}else
	{
		return b;
	
	}
        

}	
	
