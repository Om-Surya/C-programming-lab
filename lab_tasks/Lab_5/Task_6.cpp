#include <stdio.h>

int main() {
    int x, y, z, max;
    
    printf("Enter three integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    
    max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
    
    printf("The maximum of %d, %d, and %d is: %d\n", x, y, z, max);
    
    return 0;
}
