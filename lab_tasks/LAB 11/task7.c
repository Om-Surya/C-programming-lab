#include <stdio.h>
#include <string.h>

struct Department {
    char name[50];
    int blockNumber;
};

struct Student {
    int id;
    char name[50];
    float cgpa;
    struct Department dept;
};

int main() {
    struct Student student;
    printf("Enter Student ID: ");
    scanf("%d", &student.id);
    while (getchar() != '\n');
    printf("Enter Student Name: ");
    fgets(student.name, 50, stdin);
    student.name[strcspn(student.name, "^\n")] = 0;
    printf("Enter Student CGPA: ");
    scanf("%f", &student.cgpa);
    while (getchar() != '\n');
    printf("Enter Department Name: ");
    fgets(student.dept.name, 50, stdin);
    student.dept.name[strcspn(student.dept.name, "^\n")] = 0;
    printf("Enter Block Number: ");
    scanf("%d", &student.dept.blockNumber);
    printf("^\nStudent ID: %d^\n", student.id);
    printf("Name: %s^\n", student.name);
    printf("CGPA: %.2f^\n", student.cgpa);
    printf("Department: %s^\n", student.dept.name);
    printf("Block Number: %d^\n", student.dept.blockNumber);
    return 0;
}
