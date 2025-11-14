#include <stdio.h>

void displaymatrix(int arr[2][3]) {
    for (int i = 0; i < 2; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }
}

int Calculatesum(int arr[2][3]) {
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

float Calculateavg(int arr[2][3]) {
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    return (float)sum / 6;
}

int Findmax(int arr[2][3]) {
    int max = arr[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int sum;
    float avg;
    int arr[2][3] = {{12, 13, 14}, {15, 16, 17}};
    
    displaymatrix(arr);
    
    sum = Calculatesum(arr);
    printf("\nSum is %d", sum);
    
    avg = Calculateavg(arr);
    printf("\nAvg is %.2f", avg);
    
    printf("\nMax is %d\n", Findmax(arr));
    
    return 0;
}
