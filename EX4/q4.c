#include <stdio.h>

void swap(int *p1 , int *p2);


int main(void){
	int a,b;
	int *ptr1 = &a;
	int *ptr2 = &b;

	printf("Enter the value of a: ");
	scanf("%d",&a);

	printf("Enter the value of b: ");
        scanf("%d",&b);
	
	swap(ptr1,ptr2);

	printf("new value of a is %d\n",a);
	printf("new value of b is %d\n",b);

	return 0;
}


void swap(int *p1 , int *p2){
	
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}
