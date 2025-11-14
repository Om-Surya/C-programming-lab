#include <stdio.h>

int main() {
    int scores[10] = {85, 72, 90, 65, 88, 93, 78, 81, 70, 95};
    int temp;
    float median;
    
    printf("Original scores: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", scores[i]);
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (scores[j] > scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
    
    printf("\nSorted scores: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", scores[i]);
    }
    
    median = (scores[4] + scores[5]) / 2.0;
    
    printf("\nMedian score: %.1f\n", median);
    
    return 0;
}
