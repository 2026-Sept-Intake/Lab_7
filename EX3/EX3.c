#include <stdio.h>
int main(){

	float x=2.2;   // declaring a float variable
	float *ptr=&x; // declaring a pointer to the variable
	printf("%p\n", ptr); // printing address before increment
	ptr++;               // increment the pointer
	printf("%p\n", ptr); // printing the new address after increment
	return 0;
}
