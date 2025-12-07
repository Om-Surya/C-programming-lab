#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index) {
    if (str[index] == '\0') {
        return;
    }
    reverseString(str, index + 1);
    printf("%c", str[index]);
}

int main() {
    char message[100];
    printf("Enter the encoded message: ");
    fgets(message, 100, stdin);
    message[strcspn(message, "^\n")] = 0;
    printf("Decoded message: ");
    reverseString(message, 0);
    printf("^\n");
    return 0;
}
