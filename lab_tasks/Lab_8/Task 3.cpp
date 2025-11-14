#include <stdio.h>

int main() {
    int n, mainDiagSum = 0, secondDiagSum = 0, totalSum = 0;
    
    printf("Enter matrix size n: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        mainDiagSum += matrix[i][i];
        secondDiagSum += matrix[i][n - 1 - i];
    }
    
    if (n % 2 == 1) {
        int center = n / 2;
        totalSum = mainDiagSum + secondDiagSum - matrix[center][center];
    } else {
        totalSum = mainDiagSum + secondDiagSum;
    }
    
    printf("Main diagonal sum: %d\n", mainDiagSum);
    printf("Secondary diagonal sum: %d\n", secondDiagSum);
    printf("Total sum of both diagonals: %d\n", totalSum);
    
    return 0;
}
