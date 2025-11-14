#include <stdio.h>

int main() {
    int matrix[3][3];
    int isSymmetric = 1;
    
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }
    
    if (isSymmetric)
        printf("Symmetric\n");
    else
        printf("Not Symmetric\n");
    
    return 0;
}
