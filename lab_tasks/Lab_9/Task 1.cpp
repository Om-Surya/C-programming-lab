#include <stdio.h>

int sq(int num) {
    int square;
    square = num * num;
    return square;
}

int main() {
    int num, square;
    
    printf("Enter num to square: ");
    scanf("%d", &num);
    
    square = sq(num);
    
    printf("\nSquare is %d\n", square);
    
    return 0;
}

