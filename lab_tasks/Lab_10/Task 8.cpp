#include <stdio.h>

int main() {
    char names[3][21]; 
    int i;

    printf("Enter names of 3 students:\n");
    for (i = 0; i < 3; i++) {
        scanf("%s", names[i]);
    }

    printf("\nStored Names:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
