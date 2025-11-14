#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        int value = 1;
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", value);
            value = value * (i - k) / (k + 1);
        }
        printf("\n");
    }
    
    return 0;
}
