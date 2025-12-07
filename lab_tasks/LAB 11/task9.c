#include <stdio.h>

void countCalls() {
    static int callCount = 0;
    callCount++;
    printf("This function has been called %d time^(s^)^\n", callCount);
}

int main() {
    countCalls();
    countCalls();
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
