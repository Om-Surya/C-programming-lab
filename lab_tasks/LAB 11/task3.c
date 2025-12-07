#include <stdio.h>
#include <string.h>

struct Flight {
    int Flightnum;
    char departure[100];
    char destination[100];
    char date[20];
    int available;
};

void bookseat(struct Flight flights[], int total) {
    int num;
    printf("Enter flight number to book seat: ");
    scanf("%d", &num);
    for (int i = 0; i < total; i++) {
        if (flights[i].Flightnum == num) {
            if (flights[i].available > 0) {
                flights[i].available--;
                printf("Seat booked!^\n");
            } else {
                printf("No seats available!^\n");
            }
            return;
        }
    }
    printf("Flight not found!^\n");
}

void displaydetails(struct Flight flights[], int total) {
    for (int i = 0; i < total; i++) {
        printf("^\nFlight #%d^\n", i + 1);
        printf("Number: %d^\n", flights[i].Flightnum);
        printf("From: %s^\n", flights[i].departure);
        printf("To: %s^\n", flights[i].destination);
        printf("Date: %s^\n", flights[i].date);
        printf("Seats Available: %d^\n", flights[i].available);
    }
}

int main() {
    struct Flight flights[100];
    int total;
    int choice;
    printf("How many flights do you want to add? ");
    scanf("%d", &total);
    for (int i = 0; i < total; i++) {
        printf("^\nEnter details for Flight #%d^\n", i + 1);
        printf("Flight Number: ");
        scanf("%d", &flights[i].Flightnum);
        printf("Departure: ");
        scanf("%s", flights[i].departure);
        printf("Destination: ");
        scanf("%s", flights[i].destination);
        printf("Date: ");
        scanf("%s", flights[i].date);
        printf("Available Seats: ");
        scanf("%d", &flights[i].available);
    }
    while (1) {
        printf("^\n1. Book a seat^\n");
        printf("2. Show all flights^\n");
        printf("3. Exit^\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            bookseat(flights, total);
        }
        else if (choice == 2) {
            displaydetails(flights, total);
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Invalid choice!^\n");
        }
    }
    return 0;
}
