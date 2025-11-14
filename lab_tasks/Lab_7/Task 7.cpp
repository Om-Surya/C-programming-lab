#include <stdio.h>

int main() {
    int products[10] = {101, 205, 101, 303, 101, 405, 506, 101, 607, 708};
    int remove, newArray[10], newSize = 0;
    
    printf("Product IDs: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", products[i]);
    }
    
    printf("\nEnter product ID to remove: ");
    scanf("%d", &remove);
    
    for (int i = 0; i < 10; i++) {
        if (products[i] != remove) {
            newArray[newSize] = products[i];
            newSize++;
        }
    }
    
    printf("\nUpdated product IDs: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");
    
    return 0;
}
