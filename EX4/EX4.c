#include <stdio.h>
void swap(int *a, int *b); // function prototype

int main (){

	int a, b;
	printf("Enter the value for a and b: ");
	scanf("%d %d", &a, &b);
        printf("Before swap: a=%d, b=%d\n", a, b);

	swap(&a, &b);

	printf("After swap: a=%d, b=%d\n", a, b);
        
	return 0;
}
void swap(int *a, int *b)
{
	int temp= *a; // save value of a in a temporary variable
	*a= *b;       // assigning b's value to a
	*b= temp;     // assigning the saved value to b

}
