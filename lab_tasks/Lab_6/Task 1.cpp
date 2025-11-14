#include <stdio.h>

int main() {
    int even = 0, odd = 0, num;
    char choice;
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num % 2 == 0)
            even++;
        else
            odd++;
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n')
            break;
    }
    
    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);
    
    return 0;
}
