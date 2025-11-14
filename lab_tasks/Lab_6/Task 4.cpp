#include <stdio.h>

int main() {
    int vowels = 0, consonants = 0;
    char ch, choice;
    
    while (1) {
        printf("Enter a character: ");
        scanf(" %c", &ch);
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else
            consonants++;
        
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n')
            break;
    }
    
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
    
    return 0;
}
