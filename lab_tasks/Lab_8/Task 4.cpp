#include <stdio.h>

int main() {
    int matrix[3][3];
    int isUpper = 1, isLower = 1;
    
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j && matrix[i][j] != 0) {
                isUpper = 0;
            }
            if (i < j && matrix[i][j] != 0) {
                isLower = 0;
            }
        }
    }
    
    if (isUpper && isLower)
        printf("Diagonal Matrix\n");
    else if (isUpper)
        printf("Upper Triangular Matrix\n");
    else if (isLower)
        printf("Lower Triangular Matrix\n");
    else
        printf("Neither\n");
    
    return 0;
}
