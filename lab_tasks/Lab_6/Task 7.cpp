#include <stdio.h>

int main() {
    float balance = 5000, amount;
    int deposits = 0, withdrawals = 0;
    
    while (1) {
        printf("Enter transaction amount (positive for deposit, negative for withdrawal, 0 to stop): ");
        scanf("%f", &amount);
        
        if (amount == 0)
            break;
        
        balance += amount;
        printf("Updated balance: %.2f\n", balance);
        
        if (amount > 0)
            deposits++;
        else
            withdrawals++;
    }
    
    printf("Final balance: %.2f\n", balance);
    printf("Total deposits: %d\n", deposits);
    printf("Total withdrawals: %d\n", withdrawals);
    
    return 0;
}
