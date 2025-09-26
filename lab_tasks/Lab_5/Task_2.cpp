#include <stdio.h>
#include <stdbool.h>

int main(){
    int x, y;
    printf("enter x: \n");
    scanf("%d", &x);
    printf("enter y: \n");
    scanf("%d", &y);
    printf("(x>5) && (y<10). it is %s\n", ((x>5) && (y<10))?("true"):("false"));
    printf("(x==10) || (y==5). it is %s\n", ((x==10) || (y==5))?("true"):("false"));
    printf("!(x == y). it is %s\n", (!(x == y))?("true"):("false"));
    return 0;
}
