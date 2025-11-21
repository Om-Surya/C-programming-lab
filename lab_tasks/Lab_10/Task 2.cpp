#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char ch;
    char *ptr;

    printf("Enter a word: ");
    scanf("%s", word);   

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  

    ptr = strchr(word, ch);   

    if (ptr != NULL) {
        int index = ptr - word;   
        printf("Character '%c' found at position %d.\n", ch, index);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}
