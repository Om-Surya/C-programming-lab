#include <stdio.h>

int main() {
    int nnn, a = 0, b = 1, c, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &nnn);
    
    printf("Fibonacci sequence: %d %d ", a, b);
    sum = a + b;
    
    for (int i = 2; i < nnn; i++) {
        c = a + b;
        printf("%d ", c);
        sum += c;
        a = b;
        b = c;
    }
    
    printf("\nSum: %d\n", sum);
    
    return 0;
}
