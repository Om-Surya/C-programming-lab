#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char names[5][21];
    char search[21];
    char fileName[] = "names.txt";
    FILE *fptr;
    int i, found = 0;

    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }
    fptr = fopen(fileName, "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    for (i = 0; i < 5; i++) {
        fprintf(fptr, "%s\n", names[i]);
    }
    fclose(fptr);

    fptr = fopen(fileName, "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("\nEnter a name to search: ");
    scanf("%s", search);

    char temp[50];

    while (fgets(temp, 50, fptr)) {
        temp[strcspn(temp, "\n")] = '\0';

        if (strcmp(temp, search) == 0) {
            found = 1;
            break;
        }
    }
    fclose(fptr);
    if (found)
        printf("Name found in directory.\n");
    else
        printf("Name not found.\n");

    return 0;
}
