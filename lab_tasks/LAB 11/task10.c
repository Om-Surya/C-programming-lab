#include <stdio.h>
#include <string.h>

struct Movie {
    char title[100];
    char genre[50];
    char director[50];
    int release_year;
    float rating;
};

void addMovie(struct Movie movies[], int *count) {
    if (*count >= 10) {
        printf("Database is full!^\n");
        return;
    }
    while (getchar() != '\n');
    printf("^\nEnter Movie Title: ");
    fgets(movies[*count].title, 100, stdin);
    movies[*count].title[strcspn(movies[*count].title, "^\n")] = 0;
    printf("Enter Genre: ");
    fgets(movies[*count].genre, 50, stdin);
    movies[*count].genre[strcspn(movies[*count].genre, "^\n")] = 0;
    printf("Enter Director: ");
    fgets(movies[*count].director, 50, stdin);
    movies[*count].director[strcspn(movies[*count].director, "^\n")] = 0;
    printf("Enter Release Year: ");
    scanf("%d", &movies[*count].release_year);
    printf("Enter Rating: ");
    scanf("%f", &movies[*count].rating);
    (*count)++;
    printf("Movie added!^\n");
}

void searchByGenre(struct Movie movies[], int count) {
    char searchGenre[50];
    int found = 0;
    while (getchar() != '\n');
    printf("^\nEnter genre to search: ");
    fgets(searchGenre, 50, stdin);
    searchGenre[strcspn(searchGenre, "^\n")] = 0;
    printf("^\nMovies in '%s' Genre:^\n", searchGenre);
    for (int i = 0; i < count; i++) {
        if (strcasecmp(movies[i].genre, searchGenre) == 0) {
            printf("^\nTitle: %s^\n", movies[i].title);
            printf("Director: %s^\n", movies[i].director);
            printf("Year: %d^\n", movies[i].release_year);
            printf("Rating: %.1f^\n", movies[i].rating);
            found++;
        }
    }
    if (found == 0) {
        printf("No movies found.^\n");
    }
}

void displayMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("^\nNo movies in database.^\n");
        return;
    }
    printf("^\nAll Movies:^\n");
    for (int i = 0; i < count; i++) {
        printf("^\nMovie %d:^\n", i + 1);
        printf("Title: %s^\n", movies[i].title);
        printf("Genre: %s^\n", movies[i].genre);
        printf("Director: %s^\n", movies[i].director);
        printf("Year: %d^\n", movies[i].release_year);
        printf("Rating: %.1f^\n", movies[i].rating);
    }
}

int main() {
    struct Movie movies[10];
    int movieCount = 0;
    int choice;
    while (1) {
        printf("^\n1. Add a Movie^\n");
        printf("2. Search by Genre^\n");
        printf("3. Display All Movies^\n");
        printf("4. Exit^\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            addMovie(movies, &movieCount);
        }
        else if (choice == 2) {
            searchByGenre(movies, movieCount);
        }
        else if (choice == 3) {
            displayMovies(movies, movieCount);
        }
        else if (choice == 4) {
            break;
        }
        else {
            printf("Invalid choice!^\n");
        }
    }
    return 0;
}
