#include <stdio.h>

int main() {
    int matrix[3][3];
    int even = 0, odd = 0, positive = 0, negative = 0, zero = 0;
    
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == 0)
                zero++;
            else if (matrix[i][j] > 0)
                positive++;
            else
                negative++;
            
            if (matrix[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    
    printf("\nEven elements: %d\n", even);
    printf("Odd elements: %d\n", odd);
    printf("Positive elements: %d\n", positive);
    printf("Negative elements: %d\n", negative);
    printf("Zero elements: %d\n", zero);
    
    return 0;
}
