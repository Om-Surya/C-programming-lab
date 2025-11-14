#include <stdio.h>

int main() {
    int grade, count = 0, sum = 0, above70 = 0, below50 = 0;
    
    while (1) {
        printf("Enter a grade (between 0 and 100, -1 to stop): ");
        scanf("%d", &grade);
        
        if (grade == -1)
            break;
        
        printf("Grade entered: %d\n", grade);
        sum += grade;
        count++;
        
        if (grade > 70)
            above70++;
        if (grade < 50)
            below50++;
    }
    
    printf("Average grade: %.2f\n", (float)sum / count);
    printf("Grades above 70: %d\n", above70);
    printf("Grades below 50: %d\n", below50);
    
    return 0;
}
