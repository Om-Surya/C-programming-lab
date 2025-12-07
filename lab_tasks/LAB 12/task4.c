#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 5;
    int occupied = 0;
    int *ptr = (int *)malloc(capacity * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!^\n");
        return 1;
    }
    while (1) {
        int x;
        printf("Enter 1 to add a number, or -1 to quit: ");
        scanf("%d", &x);
        if (x == -1)
            break;
        if (occupied == capacity) {
            capacity += 5;
            int *temp = realloc(ptr, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed!^\n");
                free(ptr);
                return 1;
            }
            ptr = temp;
            printf(" New capacity = %d^\n", capacity);
        }
        printf("Enter the number: ");
        scanf("%d", &ptr[occupied]);
        occupied++;
    }
    printf("^\nNumbers in the array:^\n");
    for (int i = 0; i < occupied; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
