#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n);
    if (arr == NULL) {
        printf("Memory allocation failed!^\n");
        return 1;
    }
    printf("Enter %d integers:^\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("^\nArray values:^\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("^\n");
    free(arr);
    return 0;
}
