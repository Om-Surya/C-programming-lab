#include <stdio.h>

int main() {
    int arr[5];
    int num;
    int *p = arr;
    
    for (int i = 0; i < 5; i++) {
        printf("Enter num to add to array: ");
        scanf("%d", &num);
        arr[i] = num;
    }
    
    for (int i = 0; i < 5; i++) {
        printf("\nNum at address: %p is %d", (p + i), *(p + i));
    }
    
    printf("\n");
    
    return 0;
}
