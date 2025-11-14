#include <stdio.h>

int main() {
    int num[10];
    int oddsum = 0, evensum = 0, even = 0, odd = 0;
    
    printf("Enter 10 numbers to input in array\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            evensum = evensum + num[i];
            even++;
        } else {
            oddsum = oddsum + num[i];
            odd++;
        }
    }
    
    if (even != 0) {
        printf("\nEven sum is %d", evensum);
    } else {
        printf("\nNo even numbers");
    }
    
    if (odd != 0) {
        printf("\nOdd sum is %d", oddsum);
    } else {
        printf("\nNo odd numbers");
    }
    
    printf("\n");
    
    return 0;
}
