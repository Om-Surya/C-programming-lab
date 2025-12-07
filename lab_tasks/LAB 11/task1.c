#include <stdio.h>

int Sum(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + Sum(num / 10);
}

int main() {
    int num;
    printf("ENTER A NUM: ");
    scanf("%d", &num);
    printf("^\nThe sum of digits of %d is %d^\n", num, Sum(num));
    return 0;
}
