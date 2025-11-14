#include <stdio.h>

int main() {
    int size;
    
    printf("Enter matrix size (2 or 3): ");
    scanf("%d", &size);
    
    int matrix1[size][size], matrix2[size][size], result[size][size];
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    printf("\nProduct matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
