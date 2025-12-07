#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!^\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("^\n");
    int *new_ptr = (int *)realloc(NULL, 10 * sizeof(int));
    if (new_ptr == NULL) {
        printf("Realloc failed!^\n");
        free(ptr);
        return 1;
    }
    printf("Realloc with NULL behaves like malloc^\n");
    printf("New pointer allocated successfully^\n");
    free(ptr);
    free(new_ptr);
    return 0;
}
