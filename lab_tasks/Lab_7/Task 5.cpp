#include <stdio.h>

int main() {
    int grades[10];
    int sum = 0, highest = 0, lowest = 100, highestIndex = 0, lowestIndex = 0;
    float average;
    
    printf("Enter grades for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
        
        if (grades[i] > highest) {
            highest = grades[i];
            highestIndex = i;
        }
        if (grades[i] < lowest) {
            lowest = grades[i];
            lowestIndex = i;
        }
    }
    
    average = sum / 10.0;
    
    printf("\nAll grades:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i, grades[i]);
    }
    
    printf("\nAverage grade: %.2f\n", average);
    printf("Highest grade: %d (Student %d)\n", highest, highestIndex);
    printf("Lowest grade: %d (Student %d)\n", lowest, lowestIndex);
    
    grades[lowestIndex] = grades[lowestIndex] + 10;
    
    printf("\nUpdated grades:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i, grades[i]);
    }
    
    return 0;
}
