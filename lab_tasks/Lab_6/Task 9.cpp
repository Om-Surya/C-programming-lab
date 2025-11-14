#include <stdio.h>

int main() {
    int num, largest, smallest;
    char choice;
    int first = 1;
    
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (first) {
            largest = num;
            smallest = num;
            first = 0;
        } else {
            if (num > largest)
                largest = num;
            if (num < smallest)
                smallest = num;
        }
        
        printf("Do you want to continue? (yes/no): ");
        scanf(" %s", &choice);
        if (choice == 'n')
            break;
    }
    
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    
    return 0;
}
