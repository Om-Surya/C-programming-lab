#include <stdio.h>
#include <string.h>

int main() {
    char character;
    char arr[100];
    int length, count = 0;
    
    printf("Enter a character to search\n");
    scanf("%c", &character);
    
    printf("Enter a word\n");
    scanf("%s", arr);
    
    length = strlen(arr);
    
    for (int i = 0; i < length; i++) {
        if (arr[i] == character) {
            count++;
        }
    }
    
    if (count == 0) {
        printf("No similar character found\n");
    } else {
        printf("\nCharacter is found %d times in %s\n", count, arr);
    }
    
    return 0;
}
