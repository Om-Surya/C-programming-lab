#include <stdio.h>

int main() {
    int num, sum = 0;
    char choice;
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        sum += num;
        printf("Running total: %d\n", sum);
        
        printf("Do you want to enter another number? (yes/no): ");
        scanf(" %s", &choice);
        if (choice == 'n')
            break;
    }
    
    printf("Final sum: %d\n", sum);
    
    return 0;
}
