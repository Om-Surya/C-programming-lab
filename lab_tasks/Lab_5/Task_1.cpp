#include <stdio.h>

int main(){
    int a, b;
    float result;
    printf("enter a: \n");
    scanf("%d", &a);
    printf("enter b: \n");
    scanf("%d", &b);
    printf("expression is a+b*(a-b)/2\n");
    result = (float)(a-b);
    printf("first step is brackets containing the expression a-b. the answer is %.2f \n", result);
    printf("second step is dividing the previous answer by 2. (a-b)/2 and the answer is %.2f \n", (result/2));
    printf("third step is multiplying the previous answer by b. b*(a-b)/2 and the answer is %.2f \n", (b*(result/2)));
    printf("last step is adding a to it. a+b*(a-b)/2. and the answer is %.2f \n", (a+b*(result/2)));
    return 0;
}
