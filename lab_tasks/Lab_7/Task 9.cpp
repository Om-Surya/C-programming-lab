#include <stdio.h>

int main() {
    int array1[5], array2[5], merged[10];
    
    printf("Enter 5 elements for first array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array1[i]);
    }
    
    printf("Enter 5 elements for second array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array2[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        merged[i] = array1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        merged[i + 5] = array2[i];
    }
    
    printf("\nMerged array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
