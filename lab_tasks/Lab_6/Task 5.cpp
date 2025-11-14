#include <stdio.h>

int main() {
    int nnn, factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &nnn);
    
    for (int i = 1; i <= nnn; i++) {
        factorial *= i;
    }
    
    printf("Factorial: %d\n", factorial);
    
    return 0;
}
