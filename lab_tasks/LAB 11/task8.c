#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    char position[50];
};

int main() {
    struct Employee employees[5];
    int highestIndex = 0;
    for (int i = 0; i < 5; i++) {
        printf("^\nEmployee %d^\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        while (getchar() != '\n');
        printf("Enter Employee Name: ");
        fgets(employees[i].name, 50, stdin);
        employees[i].name[strcspn(employees[i].name, "^\n")] = 0;
        printf("Enter Salary: ");
        scanf("%f", &employees[i].salary);
        while (getchar() != '\n');
        printf("Enter Position: ");
        fgets(employees[i].position, 50, stdin);
        employees[i].position[strcspn(employees[i].position, "^\n")] = 0;
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;
        }
    }
    printf("^\n^\nAll Employees:^\n");
    for (int i = 0; i < 5; i++) {
        printf("^\nEmployee %d:^\n", i + 1);
        printf("ID: %d^\n", employees[i].id);
        printf("Name: %s^\n", employees[i].name);
        printf("Position: %s^\n", employees[i].position);
        printf("Salary: %.2f^\n", employees[i].salary);
    }
    printf("^\n^\nHighest Paid Employee:^\n");
    printf("Name: %s^\n", employees[highestIndex].name);
    printf("Position: %s^\n", employees[highestIndex].position);
    printf("Salary: %.2f^\n", employees[highestIndex].salary);
    return 0;
}
