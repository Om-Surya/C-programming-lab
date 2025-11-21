#include <stdio.h>
#include <string.h>

int main() {
    char pass1[50], pass2[50];

    printf("Create Password: ");
    scanf("%s", pass1);

    printf("Confirm Password: ");
    scanf("%s", pass2);

    if (strcmp(pass1, pass2) == 0)
        printf("Password Matched\n");
    else
        printf("Passwords do not match\n");

    return 0;
}
