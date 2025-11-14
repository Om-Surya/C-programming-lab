#include <stdio.h>

int main() {
    int nnn, count = 0, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &nnn);
    
    printf("Prime numbers: ");
    
    for (int num = 2; num <= nnn; num++) {
        int isPrime = 1;
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
            count++;
            sum += num;
        }
    }
    
    printf("\nCount: %d\n", count);
    printf("Sum: %d\n", sum);
    
    return 0;
}
