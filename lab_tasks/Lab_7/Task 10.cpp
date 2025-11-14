#include <stdio.h>

int main() {
    int size, index, newValue;
    
    printf("How many elements do you want to input? ");
    scanf("%d", &size);
    
    int array[size];
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("\nArray contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\nEnter index to modify (0 to %d): ", size - 1);
    scanf("%d", &index);
    
    printf("Enter new value: ");
    scanf("%d", &newValue);
    
    array[index] = newValue;
    
    printf("\nUpdated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}
