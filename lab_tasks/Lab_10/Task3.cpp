#include <stdio.h>
#include <string.h>

int main() {
    char code1[50], code2[50];
    int n, result;

    printf("Enter first product code: ");
    scanf("%s", code1);

    printf("Enter second product code: ");
    scanf("%s", code2);

    printf("Enter how many characters to compare: ");
    scanf("%d", &n);

    result = strncmp(code1, code2, n);

    if (result == 0) {
        printf("The first %d characters match.\n", n);
    } else {
        printf("The first %d characters do NOT match.\n", n);
    }

    return 0;
}
