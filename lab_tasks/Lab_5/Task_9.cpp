#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers (a, b): ");
    scanf("%d %d", &a, &b);
    
    printf("a & b (Bitwise AND): %d\n", a & b);
    printf("a | b (Bitwise OR): %d\n", a | b);
    printf("a ^ b (Bitwise XOR): %d\n", a ^ b);
    printf("~a (Bitwise NOT): %d\n", ~a);
    printf("a << 1 (Shift left): %d\n", a << 1);
    printf("a >> 1 (Shift right): %d\n", a >> 1);
    
    return 0;
}
