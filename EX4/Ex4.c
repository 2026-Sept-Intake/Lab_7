#include <stdio.h>
void swap(int *a,int *b);
int main(void)
{
	int a,b;
	printf("Enter the values for a and b:\n");
	scanf("%d %d",&a,&b);
        printf("Before swap: a=%d,b=%d\n",a,b);
	swap(&a,&b); //function call
	printf("After swap: a=%d,b=%d\n",a,b);
	return 0;

}
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

