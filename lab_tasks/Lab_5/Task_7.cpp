#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);
    
    printf("Sum of %d and %d: %d\n", a, b, a + b);
    printf("Difference between %d and %d: %d\n", a, b, a - b);
    printf("Product of %d and %d: %d\n", a, b, a * b);
    printf("Quotient of %d and %d: %d\n", a, b, a / b);
    printf("Remainder when %d is divided by %d: %d\n", a, b, a % b);
    
    return 0;
}
