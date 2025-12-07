#include <stdio.h>

int main() {
    float rad;
    const float pi = 3.141;
    printf("Enter the radius: ");
    scanf("%f", &rad);
    printf("Circumference is %.2f^\n", 2 * pi * rad);
    printf("Area is %.2f^\n", pi * rad * rad);
    return 0;
}
