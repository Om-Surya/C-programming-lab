#include <stdio.h>
#include <string.h>

int main() {
    char user1[50], user2[50];
    char combined[100];

    printf("Enter first username: ");
    scanf("%s", user1);

    printf("Enter second username: ");
    scanf("%s", user2);

    strcpy(combined, user1); 
    strcat(combined, user2);

    printf("Combined Username: %s\n", combined);

    return 0;
}
