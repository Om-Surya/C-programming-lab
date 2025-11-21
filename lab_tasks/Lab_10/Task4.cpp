#include <stdio.h>
#include <stdlib.h>

int main() {
    int id1, id2, id3;
    FILE *fptr;
    fptr = fopen("library.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter 3 book IDs:\n");
    scanf("%d %d %d", &id1, &id2, &id3);

    fprintf(fptr, "%d %d %d", id1, id2, id3);
    fclose(fptr);
    fptr = fopen("library.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fscanf(fptr, "%d %d %d", &id1, &id2, &id3);
    fclose(fptr);

    printf("Stored IDs are: %d %d %d\n", id1, id2, id3);

    return 0;
}
