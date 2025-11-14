#include <stdio.h>

int main() {
    int num[10];
    int temp, sum = 0;
    
    printf("Enter 10 numbers to input in array\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
    printf("Your array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
        sum = sum + num[i];
    }
    
    for (int i = 0; i < 5; i++) {
        temp = num[i];
        num[i] = num[9 - i];
        num[9 - i] = temp;
    }
    
    printf("\nYour reversed array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    
    printf("\nSum is %d\n", sum);
    
    return 0;
}	
