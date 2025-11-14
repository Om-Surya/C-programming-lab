#include <stdio.h>

int main() {
    int numbers[3];
    int results[3];
    
    printf("Enter 3 numbers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        results[i] = numbers[i] + 10;
    }
    
    printf("\nAfter adding 10:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", results[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        results[i] = numbers[i] - 5;
    }
    
    printf("\nAfter subtracting 5:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", results[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        results[i] = numbers[i] * 2;
    }
    
    printf("\nAfter multiplying by 2:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", results[i]);
    }
    
    printf("\n\nOriginal numbers: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}
