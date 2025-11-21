#include <stdio.h>

int main() {
    char names[3][21];
    int i, j;

    printf("Enter 3 names:\n");
    for (i = 0; i < 3; i++) {
        scanf("%s", names[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("\nCharacters in Name %d:\n", i + 1);
        for (j = 0; names[i][j] != '\0'; j++) {
            printf("%c ", names[i][j]);
        }
        printf("\n");
    }

    return 0;
}
