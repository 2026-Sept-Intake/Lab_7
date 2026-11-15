#include <stdio.h>
#include <stdlib.h> 

// Standard Value Comparison Function
int compare(int a, int b) {
    if (a > b) return 1;
    else if (a < b) return -1;
    else return 0;
}

// Absolute Value Comparison Function
int compare_absolute(int a, int b) {
    int abs_a = abs(a);
    int abs_b = abs(b);
    if (abs_a > abs_b) return 1;
    else if (abs_a < abs_b) return -1;
    else return 0;
}

// Higher-order Function Taking a Function Pointer as an Argument
int max(int a, int b, int (*compare)(int, int)) {
    if (compare(a, b) > 0) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;

    // Prompt the User to Input Values
    printf("Enter the Value for a: ");
    scanf("%d", &a);
    printf("Enter the Value for b: ");
    scanf("%d", &b);

    // Test the Max Function with Both Comparison Strategies
    int simple_max = max(a, b, compare);
    int absolute_max = max(a, b, compare_absolute);

    printf("\nInput: a=%d, b=%d\n", a, b);
    printf("Simple Comparison: max = %d\n", simple_max);
    printf("Absolute Comparison: max = %d\n", absolute_max);

    return 0;
}
