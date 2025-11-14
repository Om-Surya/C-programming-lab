#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    
    printf("Enter a string: ");
    scanf("%s", text);
    
    int length = strlen(text);
    
    for (int i = 0; i < length; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            text[i] = text[i] - 32;
        }
    }
    
    printf("Modified string: %s\n", text);
    
    return 0;
}
