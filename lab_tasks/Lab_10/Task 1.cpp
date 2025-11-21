#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("Enter the code word: ");
    scanf("%s", word);

    int length = strlen(word);

    printf("The code word %s has %d characters.\n", word, length);

    return 0;
}
