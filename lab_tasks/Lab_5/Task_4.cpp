#include <stdio.h>

int main(){
    int m, n;
    printf("enter first num \n");
    scanf("%d", &m);
    printf("enter second num \n");
    scanf("%d", &n);
    (m>n)?printf("%d is greater than %d\n", m,n):printf("%d is greater than %d\n", n,m);
    return 0;
}
