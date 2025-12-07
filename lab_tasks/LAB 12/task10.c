#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!^\n");
        return 1;
    }
    printf("Original array:^\n");
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }
    printf("^\n");
    int *new_ptr = (int *)realloc(ptr, 10 * sizeof(int));
    if (new_ptr == NULL) {
        printf("Realloc failed!^\n");
        free(ptr);
        return 1;
    }
    free(ptr);
    printf("^\nAttempting to access old pointer after free:^\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("^\n");
    free(new_ptr);
    return 0;
}
