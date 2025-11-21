#include <stdio.h>
#include <string.h>

int main() {
    char original[200];
    char backup[200];

    printf("Enter a message: ");
    fgets(original, 200, stdin);

    strcpy(backup, original);

    printf("Original Message: %s", original);
    printf("Backup Message: %s", backup);

    return 0;
}
