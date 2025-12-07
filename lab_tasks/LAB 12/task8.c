#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!^\n");
        return 1;
    }
    printf("Populating array:^\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 10;
    }
    printf("Array values: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("^\n");
    printf("^\nAssigning new values:^\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 5;
    }
    printf("Updated array values: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("^\n");
    return 0;
}
