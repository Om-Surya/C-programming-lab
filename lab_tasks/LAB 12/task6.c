#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    printf("Attempting to access uninitialized pointer...^\n");
    *ptr = 10;
    printf("Value at ptr: %d^\n", *ptr);
    return 0;
}
