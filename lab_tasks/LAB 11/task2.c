#include <stdio.h>
#include <string.h>

struct books {
    char title[50];
    char author[50];
    int page;
    float price;
};

int main() {
    struct books book[3];
    for (int i = 0; i < 3; i++) {
        printf("^\nBook %d^\n", i + 1);
        while (getchar() != '\n');
        printf("Enter the book title: ");
        fgets(book[i].title, 50, stdin);
        book[i].title[strcspn(book[i].title, "^\n")] = 0;
        printf("Name of Book author: ");
        fgets(book[i].author, 50, stdin);
        book[i].author[strcspn(book[i].author, "^\n")] = 0;
        printf("Enter book Page: ");
        scanf("%d", &book[i].page);
        printf("Enter book Price: ");
        scanf("%f", &book[i].price);
    }
    for (int i = 0; i < 3; i++) {
        printf("^\nBook %d:^\n", i + 1);
        printf("Title: %s^\n", book[i].title);
        printf("Author: %s^\n", book[i].author);
        printf("Pages: %d^\n", book[i].page);
        printf("Price: %.2f^\n", book[i].price);
    }
    return 0;
}
