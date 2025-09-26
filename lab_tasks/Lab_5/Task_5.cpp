#include <stdio.h>

int main() {
    int course;
    char grade;
    
    printf("Enter course number (1, 2, or 3): ");
    scanf("%d", &course);
    
    switch(course) {
        case 1:
            printf("Enter letter grade (A, B, C, D, or F): ");
            scanf(" %c", &grade);
            
            switch(grade) {
                case 'A':
                    printf("Excellent performance in Course 1!\n");
                    break;
                case 'B':
                    printf("Good performance in Course 1!\n");
                    break;
                case 'C':
                    printf("Average performance in Course 1!\n");
                    break;
                case 'D':
                    printf("Below average performance in Course 1!\n");
                    break;
                case 'F':
                    printf("Failed in Course 1!\n");
                    break;
                default:
                    printf("Invalid grade entered!\n");
            }
            break;
            
        case 2:
            printf("Enter letter grade (A, B, C, D, or F): ");
            scanf(" %c", &grade);
            
            switch(grade) {
                case 'A':
                    printf("Excellent performance in Course 2!\n");
                    break;
                case 'B':
                    printf("Good performance in Course 2!\n");
                    break;
                case 'C':
                    printf("Average performance in Course 2!\n");
                    break;
                case 'D':
                    printf("Below average performance in Course 2!\n");
                    break;
                case 'F':
                    printf("Failed in Course 2!\n");
                    break;
                default:
                    printf("Invalid grade entered!\n");
            }
            break;
            
        case 3:
            printf("Enter letter grade (A, B, C, D, or F): ");
            scanf(" %c", &grade);
            
            switch(grade) {
                case 'A':
                    printf("Excellent performance in Course 3!\n");
                    break;
                case 'B':
                    printf("Good performance in Course 3!\n");
                    break;
                case 'C':
                    printf("Average performance in Course 3!\n");
                    break;
                case 'D':
                    printf("Below average performance in Course 3!\n");
                    break;
                case 'F':
                    printf("Failed in Course 3!\n");
                    break;
                default:
                    printf("Invalid grade entered!\n");
            }
            break;
            
        default:
            printf("Invalid course number entered!\n");
    }
    
    return 0;
}
